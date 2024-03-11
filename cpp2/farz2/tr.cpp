#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, x, y, a, b, f=0;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        bool is = false;
        if (y%x == 0) {
            a = 1;
            b = y/x;
        } else {
            a=0;
            b=0;
        }

        cout << a << " " << b << endl;
    }
}