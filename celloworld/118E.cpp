#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e5 + 10;
const int mxm = 3e5 + 10;
int n, m, mark[mxn], cmn[mxn], baba[mxn], k, tmp, u, v, color = 1;
vector<int> adj[mxn];
set<pair<int, int>> edges;
bool poss = true;

int dfs(int i) { 
    mark[i] = color; 
    cmn[i] = color; 
    color++;
    for (int nei : adj[i]) {
        if (!mark[nei]) {
            baba[nei] = i;
            k = dfs(nei);
            cmn[i] = min(cmn[i], k);
            if (k < color) edges.insert({i, nei});
        } else if (nei != baba[i]) {
            cmn[i] = min(cmn[i], mark[nei]);
            if (edges.find({nei, i}) == edges.end()) edges.insert({i, nei});
        }
    }
    color--;
    return cmn[i];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    rpt(m) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1);
    if (edges.size() != m) cout << 0;
    else {
        for (pair<int, int> x : edges) cout << x.ft << " " << x.sd << "\n";
    }
}