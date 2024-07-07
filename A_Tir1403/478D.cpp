#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
ll dp[mxn], dpp[mxn];
ll mod = 1e9 + 7, R, G, ans, h = 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> R >> G;
    dpp[0] = (bool) R;
    dpp[1] = (bool) G;
    if (R + G >= 3) {
        for (h = 2; h * (h+1) / 2 <= R + G; h++) { // 2
            for (int g = 0; g <= min(G, h * (h+1) / 2); g++) { // 3
                if (h * (h+1) / 2 - g > R) dp[g] = 0;
                else if (g < h) dp[g] = dpp[g];
                else if (h * (h+1) / 2 - g < h) dp[g] = dpp[g - h];
                else dp[g] = dpp[g] + dpp[g - h];
                dp[g] %= mod;
            }
            rpt(min(G, h * (h+1) / 2) + 1) dpp[i] = dp[i];
        }
    }
    rpt(min(G, h * (h+1) / 2) + 1){
        ans += dpp[i];
        ans %= mod;
    }
    cout << ans;
}