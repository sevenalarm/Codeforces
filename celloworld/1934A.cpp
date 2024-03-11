#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 200;
int a[mxn];
int t, n, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        rpt(n) cin >> a[i];
        sort(a, a+n);
        ans += abs(a[0] - a[n-1]) + abs(a[n-1] - a[1]) + abs(a[1] - a[n-2]) + abs(a[n-2] - a[0]);
        cout << ans << "\n";
    }
}