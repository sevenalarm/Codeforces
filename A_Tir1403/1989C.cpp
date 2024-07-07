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
int a[mxn], b[mxn], n, t, p, m, f, s, tmp;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        rpt(n) cin >> b[i];
        p = 0, m = 0, f = 0, s = 0;
        rpt(n) {
            if (a[i] == 1 && b[i] != 1) f++;
            else if (a[i] != 1 && b[i] == 1) s++; // 2
            else if (a[i] == 1 && b[i] == 1) p++; // 1
            else if (a[i] == -1 && b[i] == -1) m++; // 1
        }
        if (s > f) swap(s, f); // 2, 1
        tmp = f - s;
        s += min(p, f - s); // 1
        p = max(0, p - tmp); // 0
        f += (p+1) / 2;
        s += p/2;

        if (s > f) swap(s, f);
        tmp = f - s;
        f -= min(m, f - s);  // 1, 1
        m = max(0, m - tmp);
        f -= (m + 1) / 2;
        s -= m/2;
        cout << min(f, s) << "\n";
    }
}