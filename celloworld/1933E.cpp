#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int a[mxn];
int t, n, l, u, q;
ll sum, ps[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        ps[0] = 0;
        range(1, n+1) {
            cin >> a[j];
            sum += a[j];
            ps[j] = sum;
        }
        ps[n+1] = 0;
        cin >> q;
        rpt(q) {
            cin >> l >> u;
            int lo = l, hi = n + 1, mid;
            while (hi - lo > 1) {
                mid = (lo + hi) / 2;
                if (ps[mid] - ps[l-1] <= u) lo = mid;
                else hi = mid;
            }
            ll azleft = u + ps[l-1];
            if (azleft - ps[lo] > 0) {
                if (abs(azleft - ps[lo+1]) < azleft - ps[lo] || 
                    abs(azleft + 1 - ps[lo+1]) < azleft - ps[lo]) {
                    lo++;
                }
            }
            cout << lo << " ";
        }
        cout << "\n";
    }
}