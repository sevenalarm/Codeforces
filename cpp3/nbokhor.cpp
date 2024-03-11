#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 2e5;
ll ps[mxn + 1];
int cnt[mxn + 1];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    ll ans = 0;
    ps[0] = 0;

    for (int i = 1; i <= n; i++ ) {
        cin >> x;
        if (i == 0) {
            ps[0] = x;

        } else {
            ps[i] = ps[i-1] + x;
        }
    }

    for (int i = 0; i <= n; i++) {
        ps[i] = ((ps[i] % n) + n) % n;
        // cout << ps[i] << ' ';
        ans += cnt[ps[i]];
        cnt[ps[i]]++;
    }
    cout << endl;
    cout << ans;

}