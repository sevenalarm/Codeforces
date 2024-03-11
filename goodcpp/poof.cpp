#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
ll dp[mxn];

int digsum(int n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve() {
    dp[0] = 0;
    range(1, mxn) {
        dp[j] = dp[j-1] + digsum(j);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}