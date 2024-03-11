#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1875/problem/D

const int mxn = 5000 + 10;
int t, n, x, mex, dp[mxn], mnm, cnt[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < mxn; i++) cnt[i]= 0;
        for (int i = 0; i < n; i++) { 
            cin >> x;
            if (x <= 5000) cnt[x]++;
            dp[i] = 0;
        }
        for (int i = 0; i < n; i++) { 
            if (!cnt[i]) {
                mex = i;
                break;
            }
        }
        for (int i = 1; i <= mex; i ++) { 
            mnm = 2e9;
            for (int j = i - 1; j >= 0; j --) { 
                if (cnt[j]) {
                    if (i * (cnt[j] - 1) + j + dp[j] < mnm) {
                        mnm = i * (cnt[j] - 1) + j + dp[j];
                    }
                } else if (dp[j] < mnm) mnm = dp[j];
            }
            dp[i] = mnm;
        }
        cout << dp[mex] << "\n";
    }
}