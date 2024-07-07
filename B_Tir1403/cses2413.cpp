#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e6 + 10;
ll dp[mxn][3], ans;
int mod = 1e9 + 7, n, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[0][2] = 1;
    fori(1, mxn) {
        dp[i][0] = dp[i-1][0] + dp[i-1][2];
        dp[i][1] = 3 * (dp[i-1][1] + dp[i-1][2]);
        dp[i][2] = dp[i-1][0] + dp[i-1][1] + 2 * dp[i-1][2];
        range(0, 3) dp[i][j] %= mod;
    }
    
    cin >> t;

    while (t--) {
        cin >> n;
        cout << dp[n][2] << "\n";
    }
}