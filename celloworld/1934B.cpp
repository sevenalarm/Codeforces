#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 30;
int dp[mxn];
int t, n, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[0] = 0;
    for (int i = 1; i < 30; i++) {
        dp[i] = i;
        for (int x : {1, 3, 6, 10, 15}) {
            if (i >= x) dp[i] = min(dp[i], dp[i-x]);
        }
        dp[i]++;
        // cout << dp[i] << " ";
    }
    cout << endl;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        ans += (n - 15) / 15;
        ans += dp[(n - (((n - 15) / 15) * 15))];
        cout << ans << "\n";
    }
}