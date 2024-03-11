#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, l , r, mid    ;
    cin >> n >> m;
    int a[n], b[m], ans[m];
    for (int i =0; i < n; i++) cin >> a[i];
    for (int i = 0 ; i < m ; i++) {
        cin >> b[i];
        ans[i] = 0;
    }

    sort(a, a+n);


    for (int i = 0; i < m; i++) {
        l = 0, r = n;
        while (r - l > 1) {
            mid = (l + r) / 2;
            if (a[mid] > b[i]) r = mid;
            else l = mid;
        }

        if (a[0] > b[i]) ans[i] = 0;
        else ans[i] = l + 1;


    }

    for (int x: ans) cout << x << " " ;

}