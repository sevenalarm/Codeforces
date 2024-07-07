#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll n, m, k, l, r, mid, ja, cnt, mn;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    l = 0, r = m * n;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        cnt = 0, ja = 0;
        fori(1, n+1) {
            ja += min(mid / i, m);
            if (mid % i == 0 && (mid / i) <= m) cnt ++;
        }
        if (ja < k) l = mid;
        else r = mid;
    }
    mn = m * n;
    fori(1, n+1) {
        if (((r + i - 1) / i) * i - r < mn - r) mn = ((r + i - 1) / i) * i;
    }
    cout << mn;
}