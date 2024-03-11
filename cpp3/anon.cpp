#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int b[n];
        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        if (k > n) k = k%n;
        if (b[n-1-k+1] == k) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}