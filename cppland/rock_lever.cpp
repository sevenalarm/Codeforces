#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

ll cnt[31];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        rpt(31) cnt[i] = 0;
        cin >> n;
        int a[n];
        rpt(n) cin >> a[i];
        rpt(n) {
            for (int j = 31; j >= 0; j--) {
                ll m = (1ll << j);
                if (a[i] >= m) {
                    cnt[j]++;
                    break;
                }
            }
        }
        ll ans = 0;
        rpt(31) {
            ans += max(0ll, cnt[i] * (cnt[i] - 1) / 2);
        }

        cout << ans << endl;
    }

}