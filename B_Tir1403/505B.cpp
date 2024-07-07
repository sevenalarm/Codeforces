#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

map<int, vector<pair<int, int>>> aj;
int n, m, q, v, u, c, mark[200], ans;

bool dfs(int i) {
    mark[i] = 1;
    bool ans = false;
    for (auto nei : aj[i]) {
        if (!mark[nei.ft] && nei.sd == c) {
            if (nei.ft == v) ans = true;
            ans = ans || dfs(nei.ft);
        } 
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(m) {
        cin >> u >> v >> c;
        aj[v].pb({u, c});
        aj[u].pb({v, c});
    }
    // for (auto x : aj) {
    //     cout << x.ft << ": ";
    //     for (auto nei : x.sd) cout << nei.ft << ", ";
    //     cout << endl;
    // }

    cin >> q;
    while (q--) {
        ans = 0;
        cin >> u >> v;
        fori(1, m+1) {
            range(0, 200) mark[j] = 0;
            c = i;
            ans += dfs(u);
        }
        cout << ans << "\n";
    }
}