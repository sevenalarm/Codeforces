#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    double ans[t];
    long long x1, y1, x2, y2;
    for (int i=0; i<t; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 && x1 == 0) ans[i] = abs(y2-y1);
        else if (y1 == y2 && y1 == 0) ans[i] = abs(x2-x1);
        else {
            double mn = 0;
            x1 = abs(x1);
            x2 = abs(x2);
            y1 = abs(y1);
            y2 = abs(y2);
            if (x1==0) {
                mn += abs(x2-y1);
                mn += abs(M_PI * min(abs(x2), abs(y1)) / 2);
            } else {
                mn += abs(y2-x1);
                mn += abs(M_PI * min(abs(y2), abs(x1)) / 2);
            }
            ans[i] = mn;
        }
    }

    for (double j:ans) cout << std::fixed << setprecision(10) << j << endl;
}