#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const ll mxn = 2001;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t, x, y, z, k, mx, v;
    cin >> t;
    while (t--) {
        mx = 0;
        cin >> x >> y >> z >> k;
        for (ll i = 1; i <= x; i++) {
            for (ll j = 1; j <= y; j++) {
                if ((i * j) <= k && (k % (i * j)) == 0) {
                    v = k / (i * j);
                    if ( v <= 2000 ) mx = max(mx, (x - i + 1) * (y - j + 1) * (z - v + 1));
                }
            }
        }
        cout << mx << "\n";
    }
}