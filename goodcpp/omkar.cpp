#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
int a[mxn];
ll dp[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        dp[0] = 0;
        range(1, n) {
            if (a[i] >= a[i-1] ) dp[i] = dp[i-1];
            else dp[i] = dp[i-1] + a[i-1] - a[i];
        }
        cout << dp[n-1] << endl;
    }
}