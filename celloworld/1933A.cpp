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

    int t, n, x, ans;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        int a[n];
        rpt(n) {
            cin >> x;
            ans += abs(x);
        }
        cout << ans << "\n";
    }
}