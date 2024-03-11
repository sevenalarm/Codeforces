#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];



        // a = [4 3 1 2]
        // b = [1 1 1 1]
        
        // ll l = 0, r = 4e10, mid;

        // while (r - l > 1) {
        //     mid = (l + r) / 2;

        //     ll bmx = 0;
        //     ll sum = 0, mx = 0, ps = 0;
        //     for (ll i = 0; i < k; i++) {
        //         sum = 0;
        //         if (i <= n - 1) {
        //             ps += a[i];
        //             sum = ps;
        //             if (b[i] > bmx)
        //                 bmx = b[i];
                    
        //             sum += (k - i - 1) * bmx;

        //         } else {
        //             sum = ps + (k - n) * bmx;
        //         }

        //         if (sum > mx) {
        //             mx = sum;
        //             if (mx >= mid) break;
        //         }
        //     }

        //     if (mx >= mid) l = mid;
        //     else r = mid;
        // }

        // cout << l << endl;

        ll bmx = 0;
        ll sum = 0, mx = 0, ps = 0;
        for (ll i = 0; i < k; i++) {
            sum = 0;
            if (i <= n - 1) {
                ps += a[i];
                sum = ps;
                if (b[i] > bmx)
                    bmx = b[i];
                
                sum += (k - i - 1) * bmx;

            } else {
                sum = ps + (k - n) * bmx;
            }

            if (sum > mx) {
                mx = sum;
            }
        }

        cout << mx << endl;
    }
}