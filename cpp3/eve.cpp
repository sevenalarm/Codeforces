#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, one = 1;
    cin >> n >> k;
    if (k==1) cout << n;
    else {
        int lg;
        for (int i = 63; i >= 0; i--) {
            if (n & (one << i)) {
                lg = i + 1;
                break;
            }
        }
        long long ans = (one << lg) - 1;
        cout << ans;
    }
}