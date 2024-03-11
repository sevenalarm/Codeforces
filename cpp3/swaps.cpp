#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/425/A
// 18 aban 1402

using namespace std;

int main()
{
    int n, q, tmp, mn = 0, mni = 0, ans = 0, swapi;
    cin >> n >> q;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        a[i] = b[i];
        ans += b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            
            // fixed the baze, check the best possible answer with this baze
            
            int mx_baze = 0;
            for (int k = i; k <= j; k++) mx_baze += a[k]; // initially set to sum of baze
        
            for (int x = 0; x < q; x++) { // preform q operations

                mn = a[i], mni = i; // find the minimum number in the baze
                for (int k = i; k <= j; k++) {
                    if (a[k] < mn) {
                        mn = a[k];
                        mni = k;
                    } 
                }

                int mx = -2000;
                for (int k = 0; k < n; k++) { // swap the minimum number with numbers outsize the baze

                    // check if we are getting a better answer
                    if ((k < i || k > j) && (a[k] > mx)) {
                        swapi = k; // keep the index of the element that we want to swap our minimum with
                        mx = a[k];
                    }
                }

                if (mn < mx) {
                    swap(a[mni], a[swapi]);
                    mx_baze += mx - mn;
                }

                
            }

            if (mx_baze > ans) ans = mx_baze;

            for (int k = 0; k < n; k ++) a[k] = b[k];
        }
    }

    cout << ans;
}
