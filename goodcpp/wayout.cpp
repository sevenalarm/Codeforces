#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

const int mxn = 100;
ll dp[100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll h, n, side, prf;
    cin >> h >> n;
    dp[0] = 0;
    range(1, h + 1) {
        side = ((n-1) / (1ll << (i-1))) % 2; // new tree
        prf = 1 - (((n-1) / (1ll << i)) % 2); // old tree prefers
        if (i == h) prf = 0;
        if (prf == side) 
            dp[i] = 1 + dp[i-1];
        else 
            dp[i] = (1ll << i) + dp[i-1];
    }

    cout << dp[h];
}