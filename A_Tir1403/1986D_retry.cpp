#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll ans = 1000, a[30];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, t, res;
    string s;
    cin >> t;
    while (t--) {
        ans = 1000;
        cin >> n;
        cin >> s;
        if (n == 2) ans = stoi(s);
        else {
            rpt(n-1) {
                res = 0;
                int j = 0;
                while (j < i) {
                    a[j] = (int)s[j] - '0';
                    j++;
                }
                a[j] = stoi(s.substr(j, 2));
                j += 2;
                while (j < n) {
                    a[j-1] = (int)s[j] - '0';
                    j++;
                }

                for (int x = 0; x < n-1; x++) {
                    if (a[x] == 0) {
                        res = 0;
                        break;
                    }
                    if (a[x] == 1) res = max(res, 1ll);
                    else if (res == 1) res = a[x];
                    else res += a[x];
                }
                ans = min(ans, res);
            }
        }
        cout << ans << "\n";
    }
}