#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1931/D
#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
pair<int, int> a[mxn];
map <pair<int, int>, int> cnt;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, x, y, chiz;
    cin >> t;
    ll ans;
    while (t--) {
        ans = 0;
        cnt.clear();
        cin >> n >> x >> y;
        rpt(n) {
            cin >> chiz;
            a[i].ft = chiz % y;
            a[i].sd = chiz % x;
            cnt[a[i]] ++;
        }
        pair<int, int> p;
        rpt(n) {
            p = make_pair(a[i].ft, (x - a[i].sd) % x);
            if (a[i] == p) {
                ans += cnt[p] - 1;
            } else ans += cnt[p];
        }
        cout << ans / 2 << endl;

        
    }
    
}