#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
vector<ll> r[mxn], c[mxn];
ll n, m, x;
ll ans;

void do_main() {
    rpt(1e5 + 1) {
        r[i].clear();
        c[i].clear();
    }

    rpt(n) {
        range(0, m) {
            cin >> x;
            r[x].push_back(i + 1);
            c[x].push_back(j + 1);
        }
    }

    for (int col = 1; col <= 1e5; col++) {
        sort(r[col].begin(), r[col].end());
        sort(c[col].begin(), c[col].end());

        rpt((int)r[col].size() - 1) 
            ans -= r[col][i] * (r[col].size() - i - 1);

        range(1, r[col].size()) 
            ans += r[col][j] * j;

        rpt((int)c[col].size() - 1) 
            ans -= c[col][i] * (c[col].size() - i - 1);

        range(1, c[col].size()) 
            ans += c[col][j] * j;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    do_main();
}