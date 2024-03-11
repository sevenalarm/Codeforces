#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

ll z = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    ll a[n], b[n];
    rpt(n) cin >> a[i];
    rpt(n) cin >> b[i];
    ll l = 0, r = 2e9 + 1, mid, need;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        need = 0;
        rpt(n) {
            if ((a[i] * mid) > b[i]) {
                if ((a[i] * mid) - b[i] > k) {
                    r = mid;
                    break;
                } else need += (a[i] * mid) - b[i];
            }
        }
        if ( r != mid ) {
            if (need <= k) l = mid;
            else r = mid;
        }
    }

    cout << l;

}