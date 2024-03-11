#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll ans = 0;
        while (n > 0) {
            ans += n;
            n /= 2;
        }

        cout << ans << endl;
    }
}