#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++ ) cin >> a[i];

    int p1 = 0, p2 = n-1;
    int l = p1, r = p2;
    bool azleft = true;
    ll ans = 0, hand = 0;

    while (p1 < p2) {
        
        if (azleft) {
            p1++; // 3

            if (a[p1] >= a[l]) {
                l = p1; // l = 3
                ans += hand; // 4
                hand = 0;
                azleft = false;

            } else {
                hand += a[l] - a[p1]; // 4
            }

        } else {
            p2--;

            if (a[p2] >= a[r]) {
                r = p2;
                ans += hand;
                hand = 0;
                azleft = true;

            } else {
                hand += a[r] - a[p2];
            }

        }
    }

    cout << ans;
}