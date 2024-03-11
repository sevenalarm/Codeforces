#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        bool ok = true, dec = true, done = false;
        for (int i = 1; i < n; i++) {
            if (a[i-1] < a[i]) {
                if (dec) {
                    if (!done) {
                        done = true;
                        dec = false;
                    }
                    else ok = false;
                }

            } else if (a[i-1] > a[i]) {
                if (!dec) ok = false;
            }
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}