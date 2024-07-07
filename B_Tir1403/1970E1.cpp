#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100 + 10;
ll dp[mxn][2], s[mxn], l[mxn];
ll mod = 1e9 + 7, n, m, sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    rpt(m) cin >> s[i];
    rpt(m) cin >> l[i];

    dp[0][0] = 1;
    fori(1, n+1) {
        range(0, m) {
            dp[j][i % 2] = 0;
            for (int k = 0; k < m; k++) {
                dp[j][i % 2] += dp[k][1 - (i % 2)] * (s[k] * (s[j] + l[j]) + l[k] * s[j]);
                dp[j][i % 2] %= mod; 
            }
        }
    }

    range(0, m) {
        sum += dp[j][n % 2];
        sum %= mod;
    }

    cout << sum;
}