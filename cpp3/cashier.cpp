#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, L, a, ti, li;
    cin >> n >> L >> a;
    int time = 0, ans = 0;
    for (int i=0; i<n; i++) {
        cin >> ti >> li;
        if (ti - time >= a) {
            ans += (ti - time) / a;
        }

        time = ti + li;
    }
    if (time <= L) ans += (L - time) / a;
    cout << ans ;
}