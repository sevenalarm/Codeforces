#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1000 + 10;
ll dp[mxn][mxn], n;
int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> n;
    dp[0][1] = 1;
    fori(1, n+1) {
        range(1, n+1) {
            cin >> c;
            if (c == '*') dp[i][j] = 0;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
            dp[i][j] %= mod;
        }
    }

    cout << dp[n][n];
}