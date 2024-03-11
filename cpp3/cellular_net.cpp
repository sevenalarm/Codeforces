#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    ll c[n], t[m];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < m; i++) cin >> t[i];

    ll l = -1, r = 2e9, mid;

    while (r - l > 1) {
        mid = (r + l) / 2; // 2
        ll pc = 0, pt = 0;
        bool ok = true;
        // c = [-2 2 4]
        // t  = [-3 0]
        while (pc < n && pt < m) {
            if ( abs(c[pc] - t[pt]) <= mid) {
                pc++; // 1

            } else {
                if (c[pc] < t[pt] || (pt == m-1)) {
                    ok = false;
                    break;
                }
                else pt++; // 1
            }
        }

        if (ok) r = mid;
        else l = mid;
    } 

    cout << r;
}

