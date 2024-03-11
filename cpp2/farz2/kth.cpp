#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long n, k, l, r, mid, nth;
    cin >> t;
    while (t--) {
        cin >> n >> k; 
        // n = 4
        // k = 12

        l = 1, r = n*k; 
        // l = 15
        // r = 17

        while (l+1 != r) {
            mid = (l+r) / 2; // 15
            if (mid % n == 0) mid ++; 

            nth = mid/n * (n-1) + mid%n; // 3 * 3 + 3 = 12
            if (nth > k) r = mid; 
            else if (nth == k) {
                l = mid;
                break;
            }
            else l = mid;
        }
        cout << l << endl;
    }
}
