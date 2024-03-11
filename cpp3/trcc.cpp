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

    
}