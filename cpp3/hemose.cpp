#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, h, w1, w2;
    cin >> t;
    while (t--) {
        cin >> n >> h;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        w1 = a[n-1], w2 = a[n-2];

        int ans = h / (w1+w2) * 2;
        if (h % (w1 + w2) > w1) ans += 2;
        else if (h % (w1 + w2) > 0) ans += 1;
        
        cout << ans << endl;
    }
}