#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn = 1e6, cur1, cur2;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    if (n == 1) mn = (a[0] - 1) / 2 + 1;
    else {
        for (int i=0; i<n; i++) {
            if (i==0) {
                if (a[0] / 2 + a[1] % 2 >= a[1]) cur1 = a[0] / 2 + a[1] % 2;
                else cur1 = a[0] / 2 + a[1] % 2 + a[1] - (a[0] / 2 + a[1] % 2);
                if (cur1 < mn) mn = cur;
            } else {
                
            }
        }
    }
}