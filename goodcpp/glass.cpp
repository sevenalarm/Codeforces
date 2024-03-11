#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll w, h, n;
    cin >> w >> h >> n;
    set <ll> sv, sh;
    multiset <ll> mv, mh;

    sh.insert(0);
    sh.insert(h);
    mh.insert(h);

    sv.insert(0);
    sv.insert(w);
    mv.insert(w);

    ll mxh = h, mxv = w, x;
    string s;
    
    rpt(n) {
        cin >> s >> x;
        if (s == "H") { // 2
            auto u = sh.lower_bound(x);
            auto d = u;
            d--;
            auto dis = mh.lower_bound(*u - *d);
            mh.erase(dis);
            mh.insert(*u - x);
            mh.insert(x - *d);
            mxh = *mh.rbegin();
            sh.insert(x);

        } else {
            auto u = sv.lower_bound(x);
            auto d = u;
            d--;
            auto dis = mv.lower_bound(*u - *d);
            mv.erase(dis);
            mv.insert(*u - x);
            mv.insert(x - *d);
            mxv = *mv.rbegin();
            sv.insert(x);
        }
        cout << mxh * mxv << endl;
    }
}