#include <bits/stdc++.h>

using namespace std;

int seen[1001], mxn = 1000;

int main() {
    int mx_dec = 0, dec = 0, d = 1, x, ans = 0;
    bool gonedec = false;
    for (int i=2; i<mxn; i++) {
        cout << i << ": ";
        x = i; // 2
        dec = 0;
        d = 1;
        for (int j=0; j<1001; j++) seen[j] = 0;
        cout << "0.";
        while (true) {
            d *= 10; // 10
            cout << (int)d / x; // 0.
            d = d % x; // 0
            seen[d] ++; // 
            if (seen[d] > 1 || d == 0) break;
            dec++;
        }

        cout << endl;

        if (dec > mx_dec) {
            mx_dec = dec;
            ans = i;
        }
    }

    cout << ans;
}