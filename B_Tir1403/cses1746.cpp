#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
const int mxm = 100 + 10;
ll dp[mxm][mxn], ans;
int a[mxn];
int mod = 1e9 + 7, n, m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(n) cin >> a[i+1];
    if (a[1]) dp[a[1]][1] = 1;
    else range(1, m+1) dp[j][1] = 1;
    
    fori(2, n+1) {
        if (!a[i]) {
            range(1, m+1) {
                dp[j][i] += dp[j][i-1];
                if (j != m) dp[j][i] += dp[j+1][i-1];
                if (j != 1) dp[j][i] += dp[j-1][i-1];
                dp[j][i] %= mod;
            }
        } else {
            dp[a[i]][i] += dp[a[i]][i-1];
            if (a[i] != m) dp[a[i]][i] += dp[a[i]+1][i-1];
            if (a[i] != 1) dp[a[i]][i] += dp[a[i]-1][i-1];
            dp[a[i]][i] %= mod;
        }
    }
    range(1, m+1) {
        ans += dp[j][n];
        ans %= mod;
    }
    // fori(1, m+1) {
    //     range(1, n+1) cout << dp[i][j] << ' ';
    //     cout << endl;
    // }
    cout << ans;
}