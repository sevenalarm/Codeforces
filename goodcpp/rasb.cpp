#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k, evcnt, mn;
    cin >> t;
    while (t--) {
        mn = 10;
        evcnt = 0;
        cin >> n >> k;
        int a[n];
        rpt(n) cin >> a[i];
        rpt(n) {
            if ((k - (a[i] % k)) % k < mn) {
                mn = (k - a[i] % k) % k;
            }
            if (a[i] % 2 == 0) evcnt ++;
        }

        if (k != 4) {
            cout << mn << endl;
        } else {
            if (evcnt > 1 || mn == 0) cout << 0 << endl;
            else if (evcnt == 1 || mn == 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
}