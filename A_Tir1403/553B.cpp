#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 51;
ll f[mxn], ans[mxn], bit[mxn], n, k;
/*
    f0 = 1
    f1 = 2
    f2 = 3
    f3 = 5
    f4 = 8
    f5 = 13
*/

void solve(ll n, ll k, ll i) { // 4, 2, 0 // 
    if (n == 1) bit[i] = 0;
    else if (k <= f[n-2]) {
        bit[i] = 0;
        solve(n-1, k, i+1);
    } else {
        bit[i] = 1;
        if (n - 2) solve(n-1, k - f[n-2], i+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    f[0] = 1;
    f[1] = 2;
    fori(2, mxn) f[i] = f[i-1] + f[i-2];
    solve(n, k, 0);
    rpt(n) ans[i] = i+1;
    rpt(n-1) {
        // cout << bit[i];
        if (bit[i]) swap(ans[i], ans[i+1]);
        cout << ans[i] << " ";
    }
    cout << ans[n-1];
}