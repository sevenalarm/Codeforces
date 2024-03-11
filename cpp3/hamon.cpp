#include <bits/stdc++.h>
// #define ll long long
using namespace std;

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        int pand;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                pand = a[i];

            } else {
                pand &= a[i];
            }
        }
        // 
        if (pand != 0) cout << 1 << endl;
        else { 

            // a = [1 , 2 , 3] // 01 , 
            int p1 = 1, tand, ans = 1;
            tand = a[0]; // 1
            while (p1 < n) {
                if (tand == 0) {
                    ans++; // 2
                    tand = a[p1]; // 5

                } else {
                    tand &= a[p1]; // 0
                }

                p1 ++; // 2
            }

            if (tand == 0) cout << ans << endl;
            else cout << ans - 1 << endl;
        }
    }
}