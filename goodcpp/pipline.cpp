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

    int t, n, a, b, lv;
    int u, d, j0, j1;
    int dis;
    bool switched = false;
    string s;
    ll ans;
    cin >> t;
    while (t--) {
        ans = 0, dis = 0, lv = 0;
        switched = false;
        cin >> n >> a >> b;
        ans += b;

        d = 2 * a + b; // 9
        u = 2 * b + 2 * a; // 14
        j0 = a + b; // 7
        j1 = a + 2 * b; // 12

        cin >> s;
        rpt(n-1) {
            if (!switched) {
                if (s[i] == '0' && s[i+1] == '0') ans += j0; // 14
                else if (s[i] == '0' && s[i+1] == '1'){
                    ans += u;
                    switched = true;
                }

            } else {
                if (s[i] == '0') dis++;
                else {
                    if (dis == 1) ans += j1;
                    else if (dis > 1) ans += min((ll)(dis-2) * j0 + u + d, (ll)dis * j1);
                    ans += j1;
                    dis = 0;
                }
            }
        }

        if (dis != 0) ans += d + (ll)(dis) * j0;
        else if (switched) ans += d;
        else ans += j0;
        cout << ans << endl;
    }
}