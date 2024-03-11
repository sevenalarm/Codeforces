#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long dis[n], x, shart[n], ans=0;
    for (int i=0; i<n; i++) {
        cin >> dis[i];
    }

    for (int i=0; i<n; i++) {
        cin >> x;
        dis[i] -= x;
    }

    sort(dis, dis+n);

    for (int i=0; i<n; i++) {
        shart[n-i-1] = 1 - dis[i];
    }


    for (int i=0; i<n; i++) {
        int l = -1, r = n, mid;
        bool self = false;

        while (r-l > 1) {
            mid = (r+l)/2;
            if (shart[mid] <= dis[i]) {
                ans += mid - l;
                l = mid;
                if (mid >= n-i-1 && self==false) {
                    ans--;
                    self = true;
                } 
            } else r = mid;
        }

        // cout << ans << endl;
    }

    cout << ans / 2;

}

