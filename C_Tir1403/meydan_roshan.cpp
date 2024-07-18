#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
int c[mxn], n, t;
ll dp[mxn], ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> c[i+1];
        ans = 4e18;

        dp[1] = c[1];
        dp[2] = dp[1] + c[2];
        dp[3] = dp[1] + c[3];
        fori(4, n+1) dp[i] = c[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
        ans = min(ans, min(dp[n], min(dp[n-1], dp[n-2])));

        dp[2] = c[2];
        dp[3] = c[3];
        dp[4] = c[4] + min(dp[2], dp[3]);
        fori(5, n+1) dp[i] = c[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
        ans = min(ans, dp[n]);

        dp[3] = c[2] + c[3];
        dp[4] = c[2] + c[4];
        dp[5] = c[2] + c[5];
        fori(6, n+1) dp[i] = c[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
        ans = min(ans, dp[n-1]);

        if (n == 1) ans = c[1];
        else if (n == 2) ans = min(c[1], c[2]);
        else if (n == 3) ans = min(c[1], min(c[2], c[3]));

        cout << ans << "\n";
    }
}