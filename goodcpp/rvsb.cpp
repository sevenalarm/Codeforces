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

    int t, n, r, b, mn, mx;
    char cmn , cmx;
    cin >> t;
    while (t--) {
        cin >> n >> r >> b;
        if (r == b) {
            rpt(n/2) cout << "RB";
            cout << endl;
        } else {
            mn = min(r, b);
            mx = max(r, b);
            cmn = 'R';
            cmx = 'B';
            if (mn == b) swap(cmn, cmx);

            string a[2 * mn + 1];
            rpt(2 * mn + 1) {
                if (i % 2 == 0) {
                    range(0, (int)(mx / (mn + 1))) {
                        a[i] += cmx;
                    }
                } else a[i] = cmn;
            }
            rpt(mx % (mn + 1)) {
                a[i * 2] += cmx;
            }

            rpt(2 * mn + 1) cout << a[i];
            cout << endl;
        }
    }
}