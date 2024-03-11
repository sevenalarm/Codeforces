#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/1895/B

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[2*n];
        for (int i=0; i<2*n; i++) cin >> a[i];
        sort(a, a+2*n);

        int sum = 0;
        for (int i=1; i<n; i++) {
            sum += a[i] - a[i-1];
        }

        for (int i=n+1; i<2*n; i++) {
            sum += a[i] - a[i-1];
        }

        cout << sum << endl;
        for (int i=0; i<n; i++) {
            cout << a[i] << " " << a[i+n] << endl;
        }
    }
}