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
int a[mxn], dpl[mxn], dpr[mxn], n, ans, mni;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n) cin >> a[i];
    dpl[0] = 1;
    mni = 0;
    fori(1, n) {
        dpl[i] = min(dpl[mni] + i - mni, a[i]);
        if (a[i] < dpl[mni] + i - mni) mni = i;
    }
    dpr[n-1] = 1;
    mni = n-1;
    for (int i = n-2; i >= 0; i--) {
        dpr[i] = min(dpr[mni] + mni - i, a[i]);
        if (a[i] < dpr[mni] + mni - i) mni = i;
    }

    ans = 0;
    rpt(n) {
        ans = max(ans, min(dpl[i], dpr[i]));
        // cout << dpl[i] << " " << dpr[i] << endl;
    }
    cout << ans;
}