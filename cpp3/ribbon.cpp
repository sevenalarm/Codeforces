#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int c[n], a[n];
        for (int i = 0; i < n; i++) { cin >> c[i]; a[i] = 0; }

        long long ans = 0;
        int i = 0;
        while (i < n-1) {
            c[i]--;
            if (c[i] < c[i+1]) i++;
            else {
                ans += c[i] - c[i + 1] + 1;
                i++;
            }
        }

        ans += c[n-1] - 1;

        cout << ans << endl;

    }
}