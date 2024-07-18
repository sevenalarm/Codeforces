#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll t, n, dig, tmp, b, cnt;
string chiz;

bool poss(ll a, ll b) {
    chiz = "";
    rpt(a - b / dig) chiz += to_string(n);
    chiz = chiz.substr(0, a * dig - b);
    ll num = stoi(chiz);
    if (num == a * n - b) return true;
    else return false;
}

vector<pair<int, int>> ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans.clear();
        cin >> n;
        cnt = 0;
        tmp = n;
        dig = 0;
        while (tmp) {
            dig ++;
            tmp /= 10;
        }
        for (ll a = 1; a <= 1e4; a++) {
            for (ll d = 1; d <= 6; d++) {
                if (a * dig - d > 0) {
                    b = a * dig - d;
                    // cout << a << " " << b << endl;
                    if (poss(a, b)) {
                        ans.pb({a, b});
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << "\n";
        for (auto x : ans) cout << x.ft << " " << x.sd << "\n"; 
    }
}