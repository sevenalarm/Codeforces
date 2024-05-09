#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e5 + 10;
vector<int> aj[mxn];
int mark[mxn], bad[mxn], cnt[mxn], baba[mxn], ans = 0, n, m, d, u, v, door = 0, a, b;
bool beshmor = false;

void dfs(int i) {
    mark[i] = mark[baba[i]] + 1; // 1:0
    if (beshmor) {
        cnt[i] += 1;
        if (mark[i] == d) return;
    }
    if (mark[i] > mark[door] && bad[i]) door = i;
    for (int nei : aj[i]) {
        baba[nei] = i;
        if (!mark[i]) dfs(nei);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> d;
    rpt(m) {
        cin >> u;
        bad[u] = 1;
    }
    rpt(n-1) {
        cin >> u >> v;
        aj[u].pb(v);
        aj[v].pb(u);
    }
    baba[1] = 0;

    mark[0] = -1;
    dfs(1);
    a = door;
    
    mark[0] = -1;
    rpt(n + 1) mark[i] = 0;
    beshmor = true;
    door = 0;
    dfs(a);
    b = door;

    rpt(n + 1) mark[i] = 0;
    dfs(b);
    
    cout << a << " " << b << endl;
    rpt(n + 1) cout << cnt[i] << " ";
    // cout << ans;
}