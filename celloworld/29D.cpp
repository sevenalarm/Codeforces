#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 300 + 10;
int mark[mxn], u, n, v, k, rcp[mxn];
vector<int> gasht, path, adj[mxn];

void find_path(int i, int j) {
    mark[i] = 1;
    if (i == j) {
        for (int x : path) 
            gasht.push_back(x);
        return;
    }
    path.push_back(i);
    for (int nei : adj[i]) {
        if (!mark[nei]) find_path(nei, j);
    }
    path.pop_back();
}

int main() {
    cin >> n;
    rpt(n-1) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    k = 0;
    range(2, n+1) {
        if (adj[j].size() == 1) k++;
    }
    rcp[0] = 1;
    rpt(k) cin >> rcp[i+1];
    rpt(k + 1) {
        range(0, n+1) mark[j] = 0;
        path.clear();
        if (i != k) find_path(rcp[i], rcp[i+1]);
        else find_path(rcp[i], 1);
    }
    gasht.push_back(1);
    if (gasht.size() == 2*n-1) {
        for (int x : gasht) cout << x << " ";
    } else {
        cout << -1;
    }
}