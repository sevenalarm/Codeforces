#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, kmax;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        kmax = n / 2 + (n % 2);
        // cout << kmax << endl;
        sort(a, a+n);
        int l = 0, r = kmax+1, mid;

        while (r - l > 1) {
            mid = (l+r) / 2;
            bool poss = true;

            // check 1
            for (int i = 0; i < mid; i++) {
                if (a[i] != 1) poss = false;
            }

            if (poss) {
                for (int i = mid; i < 2 * mid - 1; i++) {
                    if (a[i] > i - (mid-2)) poss = false;
                }
            }

            if (poss) l = mid;
            else r = mid;
        }

        cout << l << endl;

    }
}