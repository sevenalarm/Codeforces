#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

const int mxn = 3e5 + 10;
ll d[mxn], h[mxn], t, n, di;
ll sum, k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> k;
        rpt(n + 1) d[i] = 0;
        rpt(n) cin >> h[i];
        rpt(n) {
            cin >> di;
            di = abs(di);
            d[di] += h[i];
        }
        bool poss = true;
        sum = 0;
        rpt(n + 1) {
            sum += d[i];
            if (sum > (i * k)) {
                poss = false;
                break;
            }
        }
        if (poss) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}