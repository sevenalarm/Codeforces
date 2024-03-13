#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 100 + 10;
int n, m, k, t, x;
int l, r, mid, ans;
vector<int> a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n >> m >> k;
        a.clear();
        b.clear();
        rpt(n) {
            cin >> x;
            a.push_back(x);
        }
        rpt(m) {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        rpt(n) {
            l = -1, r = m;
            while (l + 1 < r) {
                mid = (l + r) / 2;
                if (b[mid] <= k - a[i]) l = mid;
                else r = mid;
            }
            ans += l + 1;
        }
        cout << ans << "\n";
    }
}