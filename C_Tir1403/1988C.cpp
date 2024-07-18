#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll ans[65], n, t;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        rpt(65) ans[i] = 0;
        cin >> n;
        ll ind = 0, bit = 0, tmp, lg = 0, pc = 0;
        tmp = n;
        while (tmp) {
            lg++;
            pc += tmp % 2;
            tmp/=2;
        }
        // cout << lg << " " << pc + 1;
        // cout << endl;
        for (int dig = 0; dig < lg; dig++) {
            // cout << (1ll << (lg - 1 - dig))<< " ";
            if ((n & (1ll << (lg - 1 - dig))) == 0) fori(0, pc+1) ans[i] *= 2;
            else {
                fori(0, ind) {
                    ans[i] *= 2;
                    ans[i]++;
                }
                ans[ind] *= 2;
                fori(ind+1, pc+1) {
                    ans[i] *= 2;
                    ans[i]++;
                }
                ind++;
            }
        }
        if (ans[0] > 0) {
            cout << pc+1 << "\n";
            rpt(pc+1) cout << ans[i] << " ";
        } else cout << 1 << "\n" << n;
        cout << "\n";

    }
}