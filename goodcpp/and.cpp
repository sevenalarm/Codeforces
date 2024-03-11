#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int mark[mxn], annd[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, x, xand, ans = 10;
    cin >> n >> k;
    rpt(n) {
        cin >> x;
        xand = x & k;
        if (mark[x]) ans = 0;
        else if (mark[xand] || annd[x]) ans = min(ans, 1);
        else if (annd[xand]) ans = min(ans, 2);
        mark[x] = 1;
        annd[xand] = 1;
    }

    if (ans == 10) cout << -1;
    else cout << ans;

    
}