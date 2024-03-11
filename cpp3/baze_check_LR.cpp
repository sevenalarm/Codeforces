#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e5;


int main() {
    int prev[mxn];
    for (int i = 0; i<mxn; i++) prev[i] = -1;

    int n, x;
    cin >> n;
    int a[n][2];
    for (int i=0; i<n; i++) {
        cin >> x;
        a[i][0] = prev[x];

        if (prev[x] != -1) {
            a[prev[x]][1] = i;

        } else a[i-1][1] = -1;

        prev[x] = i;
    }

    int q, l, r;
    cin >> q;
    while (q--) {
        cin >> l >> r >> x;
        if (l <= a[x][0] || a[x][1] >= r) cout << "YES! Ashna.";
        else cout << "NO. Garibe";
        cout << endl;
    }
}


