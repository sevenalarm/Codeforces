#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
ll cnt[mxn], a[mxn], zoj, fard, ans, dp[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    rpt(n) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    dp[0] = 0;
    dp[1] = cnt[1];
    fori(1, mxn) dp[i] = max(dp[i-1], dp[i-2] + cnt[i] * i);
    cout << dp[mxn - 1];
}

