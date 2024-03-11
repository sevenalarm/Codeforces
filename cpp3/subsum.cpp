#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    long long ps[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        ps[i] = sum;
    }

    sort(ps, ps+n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (ps[i] == x) ans++;
        else if (ps[i] > x) {
            int l, r, mid;
            l = 0, r = n;
            while (r - l > 1) {
                mid = (l + r) / 2;
                if (ps[mid] > ps[i] - x) r = mid;
                else l = mid;
            }
            if (ps[l] == ps[i] - x) ans++;
        }
    }

    cout << ans ;


}