#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
 
const int mxn = 2e6 + 100;
int dp[mxn][2];
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    rpt(n) cin >> a[i];
    rpt(n) {
        if (i == 0) {
            dp[0][0] = 1;
            dp[0][1] = 1;
 
        } else {
            if (a[i] > a[i-1]) {
                dp[i][0] = dp[i-1][0] + 1; // salem

                dp[i][1] = dp[i-1][1] + 1; // pir ghabli
                if ((i > 1) && a[i] > a[i-2]) // hazf ghabli, salem 2ghabli
                    dp[i][1] = max(dp[i][1], dp[i-2][0] + 1);
                
            } else {
                dp[i][0] = 1;      
            
                if ((i > 1) && a[i] > a[i-2]) {
                    dp[i][1] = dp[i-2][0] + 1; 
    
                } else dp[i][1] = 1;

            }
            dp[i][1] = max(dp[i][0], dp[i][1]);
            ans = max(ans , dp[i][1]);
        }
    }

    // cout << dp[n-1][2] << endl;
    cout << ans;

}