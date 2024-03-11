#include <bits/stdc++.h>

using namespace std;
int b[8][8];
int main() {
    int t;
    cin >> t;
    while (t--) {
        string sq;
        cin >> sq;
        int r, c;
        r = sq[1] - '0';
        c = sq[0] - 'a';

        for (int i = 0; i < 8; i++) {
            if (i != c) cout << (char)(i +'a') << r << endl;
        }

        for (int i = 0; i < 8; i++) {
            if (i+1 != r) cout << sq[0] << i+1 << endl;
        }

    }
}