#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e3;
ll cab[mxn][2];

int mod = 1e9 + 7;
ll p[mxn][mxn];
ll dp[mxn][mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, n, s, l;
    cin >> m >> n;
    rpt(m) cin >> cab[i][0];
    rpt(m) cin >> cab[i][1];

    rpt(m) {
        range(0, m){
            p[i][j] = cab[i][0] * cab[j][0] + cab[i][0] * cab[j][1] + cab[i][1] * cab[j][0]; 
            p[i][j] %= mod;
        }
    }

    rpt(m) {
        range(0, m) {
            dp[1][i] += p[i][j];
            dp[1][i] %= mod;
        }
    }

    for (int d = 2; d <= n; d++) {
        rpt(m) { // i
            range(0, m){
                dp[d][i] += p[i][j] * dp[d-1][j];
                dp[d][i] %= mod;
            }
        }
    }

    cout << dp[n][0];
}