#include <bits/stdc++.h>

using namespace std;
const int mxn = 5000;
int a[mxn]; // 2
int main() {
    int n, x, prev, b, q;
    cin >> n;
    int p = 0;
    for (int i = 0 ; i < n; i++) {
        cin >> x; // 7
        if (i == 0) {
            a[p] = x;
        }
        else {
            int q = max(x, prev);
            int b = min(x, prev);
            int tmp;
            while (b != 0) {
                tmp = q;
                q = b;
                b = tmp % b;
            }

            if (q > 1) {
                a[p] = 1;
                p++;
                a[p] = x;
            } else a[p] = x;

        }
        prev = a[p]; // 2
        p++; // 1
    }
    cout << p - n << endl;
    for (int i = 0 ; i < p; i++) cout << a[i] << " ";
}