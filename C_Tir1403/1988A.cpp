#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 11e3 + 10;
int n, t, k;
ll dp[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> k;
        dp[1] = 0;
        fori(2, k+1) dp[i] = 1;
        fori(k+1, n+1) dp[i] = dp[i - k + 1] + 1;
        cout << dp[n] << "\n";
    }
}