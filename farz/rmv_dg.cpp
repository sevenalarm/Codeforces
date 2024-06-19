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
int dp[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, dig;
    string s;
    cin >> n;
    s = to_string(n);
    dp[0] = 0;
    fori(1, n+1) {
        dp[i] = i; // 10
        s = to_string(i); // 10
        range(0, s.size()) {
            dig = (int)s[j] - '0';
            dp[i] = min(dp[i], dp[i - dig] + 1);
        }
    }

    cout << dp[n];
}