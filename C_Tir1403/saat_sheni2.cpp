#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100 + 10;
int dp[mxn][mxn], n, m, T, t, sec[mxn], d;
bool poss;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> T;
        sec[0] = 0, sec[n+1] = T;
        rpt(n) cin >> sec[i+1];
        rpt(n + 2) range(0, m + 1) dp[i][j] = 0;
        dp[0][m] = 1;
        fori(1, n+2) {
            d = sec[i] - sec[i-1];
            range(0, m - d + 1) {
                if (dp[i - 1][j + d]) {
                    dp[i][j] = 1;
                    if (i != T) dp[i][m - j] = 1;
                }
            }
            // cout << sec[i] << ": ";
            // range(0, m+1) if (dp[i][j]) cout << j << " ";
            // cout << endl;
        }
        poss = false;
        range(0, m+1) if (dp[n+1][j]) poss = true;
        if (poss) cout << "YES\n";
        else cout << "NO\n";
    }
}