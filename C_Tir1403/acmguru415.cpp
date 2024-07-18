#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxx = 1e4 + 10;
const int mxn = 200 + 10;
bool dp[mxn][mxx];
int n, x, a[mxn];
vector<int> ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    rpt(n) cin >> a[i + 1];
    fori(1, n+1) {
        swap(a[i], a[n]);
        range(1, n) {
            for (int k = 1; k <= x; k++) {
                if (k >= a[j]) dp[j][k] = dp[j-1][k] || dp[j-1][k - a[j]];
                else dp[j][k] = dp[j-1][k];
            }
        }
        if (!dp[n-1][x]) ans.pb(a[n]);
        swap(a[i], a[n]);
    }
    cout << ans.size() << endl;
    for (int i : ans) cout << i << " ";
}