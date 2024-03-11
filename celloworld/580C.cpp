#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
vector<int> adj[mxn];
int mark[mxn], n, m, x, y, cat[mxn], azar[mxn], ans = 0;

void dfs(int i, int mom) {
    mark[i] = 1;
    if (cat[i]) {
        azar[i] = azar[mom] + 1;
        if (azar[i] > m) return ;
    } else azar[i] = 0;
    
    if ((int)adj[i].size() == 1 && i != 1) ans++;
    for (int nei:adj[i]) {
        if (!mark[nei]) dfs(nei, i);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(n) cin >> cat[i+1];
    rpt(n-1) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    azar[0] = 0;
    dfs(1, 0);
    // rpt(n+1) cout << azar[i] << " ";
    // cout << endl;
    cout << ans;
}