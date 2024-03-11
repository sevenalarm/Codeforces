#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, m, suma, sumb, x;
    cin >> t;
    while (t--) {
        suma = 0;
        sumb = 0;
        cin >> m;

        int psa[m], psb[m];

        rpt(m) {
            cin >> x;
            suma += x;
            psa[i] = suma;
        }

        rpt(m) {
            cin >> x;
            sumb += x;
            psb[i] = sumb;
        }

        int ans = 2e9;
        if (m == 0) ans = 0;
        else {
            rpt(m) {
                if (i == 0) {
                    ans = min(suma - psa[i], ans);

                } else if (i == m-1) {
                    ans = min(psb[i-1], ans);
                } else {
                    ans = min(max(suma - psa[i], psb[i-1]), ans);
                }
            }
        }

        cout << ans << endl;
    }
}