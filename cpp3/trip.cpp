#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, prev = 0, g, t;
    cin >> t;
    while (t--) {
        cin >> n >> g;
        int mx = 0, prev = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x - prev > mx) mx = x - prev;
            if (i == n-1 && (g - x) * 2 > mx) mx = (g - x) * 2;
            prev = x;

        }

        cout << mx << endl;
    }
}