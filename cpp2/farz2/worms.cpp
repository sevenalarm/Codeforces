#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, sum = 0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> x;
        sum += x;
        a[i] = sum;
    }

    int m, mid;
    cin >> m;
    int b[m];
    for (int i=0; i<m; i++) {
        cin >> b[i];
    }

    int l = 0, r = n-1;
    // a = [2 9 12 16 25]
    // l = 0
    // r = 4

    for (int i=0; i<m; i++) {
        l = 0, r = n;
        if (a[0] >= b[i]) {
            cout << 1 << endl;
        } else {
            while (l+1 != r) {
                mid = (l + r) / 2; // a[2] = 12
                if (a[mid] >= b[i]) r = mid;
                else l = mid;
            }
            cout << r + 1 << endl;
        }
        
        
    }
}