#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll n, a, b, t, mx, sum, l, r, mid, sum2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        mx = 0;
        cin >> n >> a >> b;
        l = 0, r = n + 1;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            sum = (2 * b - mid + 1) * mid / 2 + (n - mid) * a;
            sum2 = (2 * b - mid) * (mid + 1) / 2 + (n - mid - 1) * a;
            if (sum <= sum2) l = mid;
            else r = mid;
        }
        cout << (2 * b - l + 1) * l / 2 + (n - l) * a << "\n";
    }
}