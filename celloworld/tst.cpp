#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
vector<int> adj[mxn], p[mxn], path;
int mark[mxn], baba[mxn], v, n, a, b;

void dfs1(int i) {
    mark[i] = 1;
    path.push_back(i);
    for (int nei : adj[i]) {
        if (!mark[nei]) dfs1(nei);
    }

    if (adj[i].size() == 1) 
        p[i] = path;
    
    path.pop_back();
}

void dfs2(int i, int dad) {
    mark[i] = 1;
    baba[i] = dad;
    for (int nei : adj[i]) {
        if (!mark[nei]) dfs2(nei, i);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> v;
    rpt(n-1) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // 1
    // dfs1(1);
    // for (int i : p[v]) cout << i << " ";

    // 2
    // baba[0] = -1;
    // dfs2(1, 0);
    // while (baba[v] != -1) {
    //     cout << v << " ";
    //     v = baba[v];
    // }
}       
