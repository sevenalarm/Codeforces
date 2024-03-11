#include <bits/stdc++.h>

// ACCEPTED
// https://codeforces.com/contest/1611/problem/B

using namespace std;

int main() {
    int t, a, b, sum, l , r, mid;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        sum = a+b;
        l = 0, r = sum/4 + 1;
        while (r-l > 1) {
            mid = (l+r) / 2;
            if (mid > a || mid > b) r = mid;
            else l = mid;
        }

        cout << l << endl;
    }
}