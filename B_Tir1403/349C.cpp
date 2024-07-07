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
int a[mxn];
ll l, r, mid, n, tmp;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n) cin >> a[i];
    l = 0, r = 2e9;
    bool bad;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        tmp = mid;
        bad = false;
        rpt(n) {
            tmp -= max(mid - a[i], 0ll);
            if (mid < a[i]) bad = true;
        }
        if (tmp <= 0 && !bad) r = mid;
        else l = mid;
    }
    cout << r;
}