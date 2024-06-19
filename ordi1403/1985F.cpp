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
int a[mxn], c[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t, n, l, r, mid, h, sum;
    cin >> t;
    while (t--) {
        cin >> h >> n;
        rpt(n) cin >> a[i];
        rpt(n) cin >> c[i];

        l = 0, r = h * mxn;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            sum = 0;
            rpt(n) {
                sum += ((mid + c[i] - 1) / c[i]) * a[i];
                // if (mid == 3) cout << c[i] << " " << a[i] << " " << mid / c[i] << endl;
            }
            if (sum < h) l = mid;
            else r = mid;
            // cout << mid << " " << sum << endl;
        }
        // cout << endl;
        cout << r << "\n";
    }
}