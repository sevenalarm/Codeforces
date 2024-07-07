#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 500 + 10;
int dp[mxn][mxn];
int t, k, n, m, a[mxn][mxn], snow[mxn][mxn], gc, val;
ll ssum, nssum;
vector<int> v;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        v.clear();
        ssum = 0, nssum = 0; // snowy sum, not_snowy sum
        cin >> n >> m >> k;
        rpt(n) range(0, m) cin >> a[i+1][j+1];
        rpt(n) {
            cin >> s;
            range(0, m) {
                snow[i+1][j+1] = s[j] - '0';
                if (!snow[i+1][j+1]) ssum += a[i+1][j+1];
                else nssum += a[i+1][j+1];
            }
        }
        rpt(n) range(0, m) if (snow[i+1][j+1] == 0) snow[i+1][j+1] = -1;
        fori(1, n+1) {
            range(1, m+1) {
                dp[i][j] = snow[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        fori(k, n+1) {
            range(k, m+1) {
                val = abs(dp[i][j] - dp[i-k][j] - dp[i][j-k] + dp[i-k][j-k]);
                if (val) v.pb(val);
            }
        }
        if (ssum - nssum == 0) cout << "YES" << "\n";
        else if (!v.size()) cout << "NO" << "\n";
        else {
            gc = v[0];
            for (int x : v) gc = __gcd(x, gc);
            if (abs(ssum - nssum) % gc == 0) cout << "YES";
            else cout << "NO";
            cout << "\n";
        }
    }
}