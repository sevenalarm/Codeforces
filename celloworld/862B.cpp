#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int mark[mxn], col = 1;
vector<int> adj[mxn];
int n, u, v, cnt1 = 0, cnt2 = 0;

void dfs(int i) {
    mark[i] = col;
    col = 3 - col;
    for (int nei:adj[i]) {
        if (!mark[nei]) dfs(nei);
    }
    col = 3 - col;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n-1) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    rpt(n + 1) {
        cnt1 += (mark[i] == 1);
        cnt2 += (mark[i] == 2);
    }
    cout << (ll)cnt1 * cnt2 - n + 1;
}