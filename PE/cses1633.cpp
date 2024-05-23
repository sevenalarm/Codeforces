#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e6 + 10;
ll n, dp[mxn];
int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dp[0] = 1;
    fori(1, n+1) {
        range(1, min(i+1, 7)) {
            dp[i] += dp[i-j];
            dp[i] %= mod;
        }
    }
    cout << dp[n];
}