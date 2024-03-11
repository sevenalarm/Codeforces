#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100;
int bad = 101;
int dp[mxn][3];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];

    rpt(n) cin >> a[i];
    rpt(n) {
        if (i == 0) {
            dp[i][0] = 1;
            if (a[i] == 0) {
                dp[i][1] = bad;
                dp[i][2] = bad;

            } else if (a[i] == 1) {
                dp[i][1] = 0;
                dp[i][2] = bad;

            } else if (a[i] == 2) {
                dp[i][2] = 0;
                dp[i][1] = bad;

            } else {
                dp[i][1] = 0;
                dp[i][2] = 0;
            }
             
        } else {
            dp[i][0] = min(min(dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + 1;
            if (a[i] == 0) {
                dp[i][1] = bad;
                dp[i][2] = bad;

            } else if (a[i] == 1) {
                dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
                dp[i][2] = bad;

            } else if (a[i] == 2) {
                dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
                dp[i][1] = bad;

            } else {
                dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
                dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
            }

        }

    }

    cout << min(min(dp[n-1][0], dp[n-1][1]), dp[n-1][2]) << endl;    
}