#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] -= x;
    }

    sort(a, a+n);

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int l = i, r = n, mid;
        while (r - l > 1) {
            mid = (l + r) / 2;
            if (a[i] + a[mid] <= 0) l = mid;
            else r = mid;
        }

        ans += n - l - 1;
    
    }
    cout << ans;
}

