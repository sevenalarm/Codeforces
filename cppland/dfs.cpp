#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
int m, n;
bool mark[mxn];
vector<int> adj[mxn];
int layer[mxn];
queue<int> q;

void dfs(int u) {
    mark[u] = 1;
    for (auto x : adj[u]) {
        if (mark[x]) continue;
        dfs(x);
    }   
}

void bfs(int u) {
    mark[u] = 1;
    q.push(u);
    while(q.size()) {
        int v = q.front();
        q.pop();
        for (auto x : adj[v]) {
            if (mark[x]) continue;
            mark[x] = 1;
            q.push(x);
        }
    }
}

bool hasc4(int u, int l, int root) {
    mark[u] = 1;
    layer[u] = l;
    for (auto x : adj[u]) {
        if (x == root && l == 3) return true;
        if (mark[x]) continue;
        return hasc4(x, l+1, root);
    } 

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int u, v;
    cin >> n >> m;
    rpt(m) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool ans = false;
    range(1, 2) {
        rpt(n+1) {
            mark[i] = 0;
            layer[i] = 0;
        }
        ans |= hasc4(j, 0, j);
    }
    rpt(n+1) {
        cout << i << ": ";
        for (auto x : adj[i]) {
            cout << x << " " << layer[x] << ", ";
        }
        cout << endl;
    }
    if (ans) {
        cout << "YES";
    } else cout << "NO";
    // rpt(n) mark[i] = 0;
}