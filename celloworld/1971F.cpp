#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

ll t, R, ans, l, r, mid, mn, mx;

void solve() {
    ans = 0;
    for (ll x = 0; x <= R; x++) {
        l = -1, r = R;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            if (mid * mid >= R*R - x*x) r = mid;
            else l = mid;
        }
        mn = r;
        l = 0, r = R + 1;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            if (mid * mid < (R+1)*(R+1) - x*x) l = mid;
            else r = mid;
        }
        mx = l;
        ans += (mx - mn + 1) * 4;
    }
    ans -= 4;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    rpt(100) {
        R = i;
        solve();
        cout << i << ": " << ans << "\n";
    }
}