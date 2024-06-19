#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1000 + 10;
int c[mxn][mxn];
int a[mxn];
ll ans = 1, mod = 1e9 + 7, k, cnt;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k;
    rpt(k) cin >> a[i];
    rpt(mxn) {
        c[0][i] = 0;
        c[i][0] = 1;
    }
    fori(1, mxn) {
        range(1, mxn) {
            c[i][j] = c[i-1][j] + c[i-1][j-1];
            c[i][j] %= mod;
        }
    }
    cnt = a[0];
    fori(1, k) {
        ans = ans * c[cnt + a[i] - 1][cnt];
        ans %= mod;
        cnt += a[i];
    }
    cout << ans;
}