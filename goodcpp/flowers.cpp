#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

//https://codeforces.com/contest/474/problem/D

const int mxn = 1e5 + 10;
ll dp[mxn], ps[mxn], sum;
ll mod = 1000000007, t, k, a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t >> k;
    dp[0] = 1;
    ps[0] = 0;
    range(1, mxn) {
        dp[i] = dp[i-1];
        if (i >= k) dp[i] += dp[i-k];
        dp[i] %= mod;
        ps[i] = ps[i-1] + dp[i];
        ps[i] %= mod;
    }

    while (t--) {
        cin >> a >> b;
        cout << (ps[b] - ps[a-1] + mod) % mod << endl;
    }
}