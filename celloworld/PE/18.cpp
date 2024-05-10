#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

int cur, ans, ind, lv, x;
int a[15][15];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    rpt(15) {
        range(0, i + 1) cin >> a[i][j];
    }
    rpt(16384) {
        x = i;
        cur = a[0][0], ind = 0, lv = 1;
        while (x) {
            ind += x % 2;
            x /= 2;
            cur += a[lv][ind];
            lv++;
        }
        ans = max(cur, ans);
    }

    cout << ans;
}