#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    if (n*n < x) cout << 0;
    else {
        long long ans = 0, i = 1;
        while (i<=x && i<=n) {
            if (x%i == 0 && x/i <= n && x/(x/i) <= n) {
                ans ++;
            } 
            i++;
        }

        cout << ans;
    }
}