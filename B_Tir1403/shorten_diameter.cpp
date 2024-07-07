#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

map<int, vector<int>> aj;
map<int, int> mark;
int n, cost, ans, k, u, v, depth = 0;
vector<pair<int, int>> e;

void dfs(int i) {
    mark[i] = 1;
    cost--;
    if (depth == k / 2) return;
    depth++;
    for (int nei : aj[i]) {
        if (!mark[nei]) dfs(nei);
    }
    depth--;
}

int main() {
    cin >> n >> k;
    ans = n;
    rpt(n - 1) {
        cin >> u >> v;
        aj[u].pb(v);
        aj[v].pb(u);
        e.pb({u, v});
    }
    if (k % 2 == 0) {
        fori(1, n+1) {
            cost = n, depth = 0;
            dfs(i);
            mark.clear();
            ans = min(ans, cost);
        }
    } else {
        for (auto ej : e) {
            cost = n, depth = 0;
            mark[ej.sd] = 1;
            dfs(ej.ft);
            mark.clear();
            mark[ej.ft] = 1, depth = 0;
            dfs(ej.sd);
            ans = min(ans, cost);
            mark.clear();
        }
    }
    cout << ans;
}