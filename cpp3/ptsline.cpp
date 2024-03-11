#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, d;
    cin >> n >> d;
    long long ans = 0;
    int a[n];

    // 4 2
    // a = [-3 -2 -1 0]

    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (long long i = 2; i < n; i++) { // i = 3
        long long l = -1, r = i; // r = 3

        while (l + 1 < r) {

            int mid = (l + r) / 2; // 0
            if (a[i] - a[mid] > d) l = mid; // 0 - -3 > 2 => l = 0
            else r = mid; // r = 1

        }
        l = max(0ll, l); // 0
        ans += ((i - r) * (i - r - 1)) / 2; // 1 + 3 - 0 * 
    }

    cout << ans;
}