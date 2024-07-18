#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 251;
map<int, ll> dp[mxn][mxn];
int n, k;
ll a[mxn];

int main() {

    cin >> n >> k;
    rpt(n) cin >> a[i+1];
    sort(a+1, a+1+n, greater<>());
    for (int c = 0; c <= n - 1; c++) {
        dp[1][0][c] = 1;
        dp[1][1][c] = max(a[1] - c, 0ll);
    }
    fori(2, n+1) {
        for (int c = 0; c <= n - i; c++)  {
            dp[i][0][c] = 1;
            range(1, i + 1) 
                dp[i][j][c] = dp[i-1][j][c] + max(a[i] - c, 0ll) * dp[i-1][j-1][c+1];
            
        }
    }
    cout << dp[n][k][0];
}