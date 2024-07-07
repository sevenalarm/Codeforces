#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)
#define int ll

const int mxn = 1e6 + 10;
int a[mxn], b[mxn], c[mxn], n, m, best[mxn], dp[mxn], mx, mn, ans;

int_fast32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(n) cin >> a[i];
    rpt(n) cin >> b[i];
    rpt(m) cin >> c[i];

    mx = *max_element(a, a + n);
    mn = *min_element(a, a + n);
    rpt(mx + 1) best[i] = INT_MAX; // best[i] is the cheapest price to forge a weapon having i ingots
    rpt(n) best[a[i]] = min(best[a[i]], a[i] - b[i]); // go over all classes and update their best[a[i]]
    fori(1, mx + 1) best[i] = min(best[i], best[i-1]); // if best[i-1] < best[i] we can make best[i-1] as well so update
    fori(mn, mx + 1) dp[i] = 2 + dp[i - best[i]];

    // cout << endl;
    // fori(1, mx + 1) cout << best[i] << " ";
    // cout << endl;
    // fori(1, mx + 1) cout << dp[i] << " ";
    // cout << endl;

    rpt(m) {
        if (c[i] <= mx) ans += dp[c[i]];
        else {
            int diff = c[i] - mx;
            int fgs = diff / best[mx];
            if (diff % best[mx] != 0) fgs++;
            ans += 2 * fgs;
            int baad = c[i] - fgs * best[mx];
            ans += dp[baad];
        }
    }

    cout << ans;
}