#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
ll a[mxn], ps[mxn];
map<ll, pair<int, bool>> mark;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t, n, cnt;
    cin >> t;
    while (t--) {
        mark.clear();
        cnt = 0;
        ps[0] = 0;
        cin >> n;
        rpt(n) {
            cin >> a[i];
            ps[i+1] = ps[i] + a[i];
            mark[ps[i+1]] = {i, 0};
        }
        rpt(n) {
            if (i <= mark[a[i] * 2].ft) mark[a[i] * 2].sd = 1;
        }
        rpt(n) {
            if (mark[ps[i+1]].sd) cnt++;
        }
        cout << cnt << "\n";
    }
}