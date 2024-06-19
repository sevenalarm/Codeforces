#include <bits/stdc++.h>
using namespace std;

const int mxx = 1e5 + 1;
const int mxn = 1e3 + 1;
int dp[mxx][mxn];
int s[mxn], h[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < x + 1; i++) {
        if (h[0] <= i) dp[i][0] = s[0];
        else dp[i][0] = 0;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            if (h[i] > j) dp[j][i] = dp[j][i-1];
            else dp[j][i] = max(dp[j][i-1], dp[j - h[i]][i-1] + s[i]);
        }
    }
    cout << dp[x][n-1];
}