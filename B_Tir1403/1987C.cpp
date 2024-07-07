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
int a[mxn], dp[mxn], t, n, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) {
            cin >> a[i];
            dp[i] = 0;
        }
        dp[n-1] = a[n-1];
        ans = dp[n-1];
        for (int i = n-2; i >= 0; i--) {
            if (a[i] <= a[i+1]) dp[i] = dp[i+1] + 1;
            else if (dp[i+1] - a[i+1] >= a[i] - a[i+1]) dp[i] = dp[i+1] + 1;
            else dp[i] = a[i];
            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
}