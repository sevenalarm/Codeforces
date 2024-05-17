#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e5 + 10;
ll a[mxn], b[mxn];
ll n, k, q, d, ans, l, r, mid, t;

void solve() {
    l = 0, r = k; // 0, 0
    while (l + 1 < r) {
        mid = (l + r) / 2; // 1
        if (d >= a[mid]) l = mid;
        else r = mid; // 1
    }
    // cout << b[r] - b[l] << " " << d - a[l] << " " << a[r] - a[l] << endl;
    ans = b[l] + ((b[r] - b[l]) * (d - a[l]) / (a[r] - a[l]));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> k >> q;
        a[0] = 0;
        b[0] = 0;
        range(1, k+1) cin >> a[j];
        range(1, k+1) cin >> b[j];
        while (q--) {
            cin >> d;
            solve();
            cout << ans << " ";
        }
        cout << "\n";
    }
    
}