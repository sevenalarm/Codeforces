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
int n, m, mark[mxn], dor[mxn], k, tmp, u, v;
vector<int> adj[mxn];
vector<pair<int, int>> edges;
bool poss = true;

void dfs(int i) {
    mark[i] = true;
    for (int nei : adj[i]) {
        if (!mark[nei]) {
            edges.pb({i, nei});
            dor[i] = nei;
            dfs(nei);
            if (dor[i] != 0) {
                poss = false;
                break;
            }
        } else {
            if (dor[nei] != i) {
                edges.pb({i, nei});
                k = nei;
                while (dor[k]) {
                    tmp = k;
                    k = dor[k];
                    dor[tmp] = 0;
                }
                cout << nei << " " << dor[nei] << " ";
            }
        }
    }
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
    if (!poss) cout << 0;
    else {
        for (pair<int, int> x : edges) cout << x.ft << " " << x.sd << "\n";
    }
}