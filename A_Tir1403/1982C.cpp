#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
int l, r, n, t, p1, p2, a[mxn], ans;
ll sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        sum = 0, p1 = 0, p2 = 1, ans = 0;
        cin >> n >> l >> r;
        rpt(n) cin >> a[i];
        sum = a[0];
        while (p2 <= n) {
            if (l <= sum && sum <= r) {
                ans++;
                p1 = p2;
                p2++;
                sum = a[p1];
            } else if (sum < l) {
                if (p2 < n) {
                    sum += a[p2];
                    p2 ++;
                } else break;
            } else if (r < sum){
                sum -= a[p1];
                p1 ++;
            }
        }

        cout << ans << "\n";
    }

}