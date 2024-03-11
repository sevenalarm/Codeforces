#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5;
vector<int> adj[mxn];
int mark[mxn], c[mxn], n, m, a, b;
bool print = false;

int dfs(int v) {
    if (print) cout << v << " ";
    mark[v] = 1;
    for (auto u:adj[v]) { // luxury
        if (!mark[u]) dfs(u);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(m) {
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
}
