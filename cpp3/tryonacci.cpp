#include <bits/stdc++.h>

using namespace std;
long long zesht = 1e9 + 7;

int main() {
    int n, q, l, r;
    cin >> n >> q;
    long long x[n], f1, f2, f[n], a, b;
    cin >> f1 >> f2;
    cin >> a >> b;
    for (int i=0; i<n; i++) cin >> x[i];

    for (int i=0; i<n; i++) {
        if (i==0) f[0] = f1;
        else if (i==1) f[1] = f2;
        else {
            f[i] = (a * f[i-2] + b * f[i-1]) % zesht ;
        }
    }

    while (q--) {
        cin >> l >> r;
        l--, r--;
        for (int i=l; i<=r; i++) {
            x[i] += f[i-l];
            x[i] = x[i] % zesht;
        }
    }

    // for (int i:f) cout << i << " ";
    // cout << endl;
    for (int i:x) cout << i << " ";

}

// 0 0 0 0 0 0 
// 1 2 5 12 29 70 - 1 6
// 2 2 5 12 29 70 - 1 1
// 2 2 5 13 30 70 - 4 5
// 2 3 5 13 30 70 - 2 2
// 2 3 5 14 30 70 - 4 4
// 2 3 5 14 32 70 - 5 6 
