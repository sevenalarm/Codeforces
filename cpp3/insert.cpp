#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t, n, x, k;
    long long ans;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        x = 1;
        long long a[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                if (i == 1) x = a[i] - a[i-1];
                else {
                    long long cur = a[i] - a[i-1];
                    x = __gcd(x, cur);                    
                }
            }
        }

        k = a[n-1] - x;
        for (int i = n-2; i >= 0; i--) {
            if (k != a[i]) break;
            k -= x;
        }

        a[n] = k;
        
        long long hadaf = a[n-1];
        for (int i = 0; i <= n; i++) {
            ans += (hadaf - a[i]) / x;
        }

        cout << ans << endl;
    }
}