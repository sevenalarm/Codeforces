#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, prev, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n];
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i==0) prev = a[i];
            else {
                if (prev > a[i]) sorted = false;
            }

            prev = a[i];
        }

        if (k == 1 && !sorted) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

}