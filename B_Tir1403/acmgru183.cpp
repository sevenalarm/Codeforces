#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e4 + 1;
int c[mxn], m, n, dp[mxn][101], ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(n) cin >> c[i+1];
    rpt(m + 1) dp[0][i] = 0;
    rpt(n + 1) dp[i][0] = INT_MAX;
    fori(1, n+1) {
        range(1, m) {
            dp[i][j] = min(dp[i][j - 1], c[i] + dp[max(i - j, 0)][m - j]);
        }
    }
    ans = INT_MAX;
    range(0, m) ans = min(ans, dp[n - j][m - j - 1]);
    cout << ans;
}