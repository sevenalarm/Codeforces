#include <bits/stdc++.h>
using namespace std;
 
const int mxx = 1e5 + 1;
const int mxn = 1e3 + 1;
int dp[mxx];
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
        if (h[0] <= i) dp[i] = s[0];
        else dp[i] = 0;
    }
 
    for (int i = 1; i < n; i++) {
        for (int j = x; j >= 0; j--) {
            if (h[i] <= j) dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }
 
    cout << dp[x];
}
