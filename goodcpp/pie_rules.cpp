#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/859/C

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
ll dp[mxn][2];
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    rpt(n) cin >> a[n - i - 1];
    dp[0][0] = 0;
    dp[0][1] = a[0];
    range(1, n) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + a[i];
    }

    cout << min(dp[n-1][0], dp[n-1][1]) << " " << max(dp[n-1][0], dp[n-1][1]);
}