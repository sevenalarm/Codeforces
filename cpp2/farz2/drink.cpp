#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, cnt = 0;
    long long m;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort (a, a+n);

    cin >> q;
    while (q--) {
        // cnt = 0;
        cin >> m;
        int l=-1, r=n, mid;
        while (r-l > 1) {
            mid = (l+r) / 2;
            if (a[mid] > m) r = mid;
            else l = mid;
        }

        cout << l+1 << endl;
    }
    
}