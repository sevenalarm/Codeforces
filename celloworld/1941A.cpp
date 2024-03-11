#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 100 + 10;
int n, m, k, t;
int l, r, mid, ans;
vector<int> a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        a.clear();
        b.clear();
        rpt(n) cin >> a[i];
        rpt(m) cin >> b[i];
        rpt(n) {
            l = 0, r = m;
            while (l + 1 < r) {
                mid = (l + r) / 2;
                if (b[mid] <= a[i]) l = mid;
                else r = mid;
            }
            ans += l + 1;
        }
        cout << ans << "\n";
    }
}