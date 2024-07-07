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
ll a[mxn], t, n, ans, prv, mx;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        ans = 0, prv = a[0], mx = 0;
        rpt(n) {
            if (a[i] < prv) {
                ans += prv - a[i];
                mx = max(prv - a[i], mx);
            } else prv = a[i];
        }
        cout << ans + mx << "\n";
    }
}