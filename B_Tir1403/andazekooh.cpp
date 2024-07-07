#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
int a[mxn], n, t, l, r, mid, prv, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        rpt(n) cin >> a[i];

        l = -1, r = 1e9;
        while (l + 1 < r) {
            mid = (l + r) / 2;

            prv = 0;
            x = 0;
            while (x < n && prv <= a[x] + mid) {
                prv = max(prv, a[x] - mid);
                x++;
            }
            if (x < n && n > 1) {
                prv = a[x-1] + mid;
                while (x < n && prv >= a[x] - mid) {
                    prv = min(prv, a[x] + mid);
                    x++;
                }
                if (x == n) r = mid;
                else l = mid;

            } else r = mid;
        } 

        cout << r << "\n";
    }
}