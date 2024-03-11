#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, x, l, r;
    cin >> n >> q;
    long long int px[n];
    for (int i=0; i<n; i++) px[i] = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i == 0) px[0] = x;
        else px[i] = px[i-1] ^ x;
    }

    while (q--) {
        cin >> l >> r;
        r--;
        l--;
        if (l == 0) cout << px[r];
        else {
            long long ans = px[r] ^ px[l-1];
            cout << ans;
        }
        cout << endl;
    }

}