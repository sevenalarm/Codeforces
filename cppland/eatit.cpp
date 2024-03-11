#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        rpt(n) cin >> a[i];

        ll sum = 0;
        bool ans = true;
        rpt(n) {
            sum += a[i];
            if (sum <= 0) ans = false;
        }

        sum = 0;
        for (int i = n-1; i >= 0; i--) {
            sum += a[i];
            if (sum <= 0) ans = false;
        }

        // int mn = 0, mx1 = 0, psum = 0;
        // rpt(n-1) {
        //     psum += a[i];
        //     if (psum < mn) mn = psum;
        //     else if (psum - mn > mx1) mx1 = psum - mn;
        // }

        // int mx2 = 0;
        // mn = 0, psum = 0;
        // range(1, n) {
        //     psum += a[i];
        //     if (psum < mn) mn = psum;
        //     else if (psum - mn > mx2) mx2 = psum - mn;
        // }

        // ans = max(mx1, mx2) < psum + a[0];

        if (ans) cout << "YES";
        else cout << "NO";
        cout << endl;
        
    }
}