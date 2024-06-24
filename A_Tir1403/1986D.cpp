#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll mn = 4e18, x, cur, res, y, mx = 300;
ll a[30];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        mn = 4e18;
        if (n == 2) mn = stoi(s);
        else {
            rpt(n-1) {
                range(0, n) a[j] = 0;
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
                y = (1ll << (n-2));
                for (ll v = 0; v < y; v++) {
                    x = v;
                    res = 0;
                    cur = a[0];
                    int k = 1;
                    while (k < n - 1) {
                        while (x % 2 == 1) {
                            cur *= a[k];
                            cur = min(mx, cur);
                            k++;
                            x /= 2;
                        }
                        if (k >= n - 1) break;
                        res += cur;
                        x /= 2;
                        cur = a[k];
                        k++;
                    }
                    res += cur;
                    mn = min(res, mn);
                }
            }
        }
        cout << mn << "\n";
    }
}