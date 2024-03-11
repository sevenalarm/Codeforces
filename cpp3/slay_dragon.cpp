#include <bits/stdc++.h>

using namespace std;
long long x, y, cost = 0, sum = 0, ycost = 0, zer = 0, lcost = 0, rcost = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, l, r, mid;
    cin >> n;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);

    cin >> m;

    while (m--) { // 2 * 10 ^ 5
        cost = 0;
        cin >> x >> y;
        ycost = y - sum;

        if (x <= a[0]) cost += max(ycost + a[0], zer); // O(1)

        else if (x >= a[n-1]) { // O(1)
            ycost = max(ycost + a[n-1], zer);
            cost += x - a[n-1] + ycost;

        } else { 
            l = 0, r = n-1;

            while (r - l > 1) { // O(log n)
                mid = (l + r) / 2;
                if (a[mid] <= x) l = mid;
                else r = mid;
            }

            lcost = max(x - a[l], zer);
            lcost += max(ycost + a[l], zer);

            rcost = max(x - a[r], zer);
            rcost += max(ycost + a[r], zer);

            cost = min(lcost, rcost);
        }

        cout << cost << endl;
    }
}