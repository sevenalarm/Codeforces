#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, mx = 0, mxi = 0, mn, mni, bu, ans;
    cin >> t;
    while (t--) {
        mx = 0, mxi = 0, mn = 1e8, mni = 0, bu = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i<n ; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > mx) {
                mx = b[i]; // 3
                mxi = i; // i = 2
            }

            bu += abs(b[i] - a[i]); // 4
        }

        ans = bu; // 4

        for (int i = 0; i < n; i++) {
            if (i != mxi) {
                int pmx = bu; // 4
                pmx -= abs(b[i] - a[i]); // 2
                pmx += abs(mx - a[i]); // 4
                pmx -= abs(mx - a[mxi]);
                pmx += abs(b[i] - a[mxi]); 
                if (pmx > ans) ans = pmx;
            }
        }

        cout << ans << endl;
    }
}