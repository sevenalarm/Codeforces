#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second


const int mxn = 2e5 + 10;
int ans, ans2, t, n;
ll chiz = (1ll << 31) - 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        map <int, int> mp;
        ans = 0, ans2 = 0;
        cin >> n;
        ll a[n];
        rpt(n) {
            cin >> a[i];
        }
        rpt(n) {
            if (!mp[a[i] xor chiz]) {
                ans++;
                mp[a[i]] ++;
            } else {
                if (mp[a[i]]) mp[a[i]]--;
                mp[a[i] xor chiz]--;
            }
        }
        cout << ans << endl;

    }
}