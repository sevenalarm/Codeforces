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

    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ll tahala = 0;
        while (k > (n+1)/2) {
            k -= (n+1)/2;
            n -= (n+1)/2;
            tahala++;
        }
        cout << (ll)(2 * k - 1) * (1ll << tahala) << endl;
    }
}