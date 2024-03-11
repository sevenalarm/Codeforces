#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e5 + 2;
long long d[mxn][4];
long long zesht = 1e9 + 7;
long long ar[mxn], asl[mxn];

int main() {
    long long n, q, l, r, a, b, f1, f2, i1, i2;
    cin >> n >> q;
    cin >> f1 >> f2;
    cin >> a >> b;

    for (int i = 0; i < n; i++) {
        cin >> asl[i];
    }

    long long f[n];
    f[0] = f1;
    f[1] = f2;
    for (int i = 2; i < n; i++) f[i] = (((f[i-2] * a) % zesht) + ((f[i-1] * b) % zesht)) % zesht;

    while (q--) {
        cin >> l >> r;
        l--, r--;

        if (r != l) {
            // d[i]= [L L2 R2 R]
            d[l][0]++;
            d[r][3] = (d[r][3] + f[r-l]) % zesht;
            d[l+1][1]++;
            d[r-1][2] = (d[r-1][2] + f[r-l-1]) % zesht;

        } else {
            asl[l] += f1;
        }

        // 0 0 0


    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 4; j++) cout << d[i][j] << " ";
    //     cout << endl;
    // }

    // cout << endl;

    for (int i = 0; i < n; i++) {
        // d[i]= [L L2 R2 R]
        if (i == 0) {
            ar[i] += (d[0][0] * f1) % zesht; // avalin

        } else if (i == 1) {
            ar[i] += (((d[1][0] * f1) % zesht) + ((d[1][1] * f2) % zesht)) % zesht; // dovomin

        } else {
            // d[i]= [L L2 R2 R]
            // [i2, i1, i]
            i1 = ar[i-1]; // meqdari k fi-1 ezafe mikone
            i2 = ar[i-2]; // meqdari k fi-2 ezafe mikone

            i1 -= d[i-1][3]; // meqdar R ha roye i-1
            i1 -= (d[i][1] * f1) % zesht; 
            i2 -= d[i-2][3]; // meqdar R ha roye i-2 
            i2 -= d[i-2][2]; // meqdar yeki moonde be R ha roye i-2

            ar[i] += ((i2 * a) % zesht + (i1 * b) % zesht) % zesht; // jam ba dota qabl
            ar[i] += (d[i][0] * f1) % zesht; // tedad L ha roye i
            ar[i] += (d[i][1] * f2) % zesht; // tedad yaki baad L ha roye i
            ar[i] %= zesht;
        }
        asl[i] += ar[i]; // add to the main array element
        // asl[i] %= zesht;
        cout << (asl[i] % zesht) << " ";
    } 
    // cout << endl;
    // for (int i = 0; i < n; i++) cout << f[i] << " ";

}

