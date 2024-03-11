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
    int n, d;
    cin >> n >> d;
    pair<int, int> a[n];
    ll ps[n];

    rpt(n) cin >> a[i].ft >> a[i].sd;
    sort(a, a+n);
    ps[0] = a[0].sd;
    range(1, n) ps[j] = ps[j-1] + a[j].sd;

    ll ans = 0;
    int l, r, mid, tah;
    rpt(n) {
        tah = a[i].ft + d - 1;
        l = 0, r = n;

        while (l + 1 < r) {
            mid = (l + r) / 2;
            if (a[mid].ft <= tah) l = mid;
            else r = mid;
        }

        if (i == 0) {
            if (ps[l] > ans) ans = ps[l];
        } else if (ps[l] - ps[i-1] > ans) ans = ps[l] - ps[i-1];
    }

    cout << ans;
}