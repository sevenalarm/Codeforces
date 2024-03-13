#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb(a) push_back((a))

const int mxn = 1e5 + 10;
ll n, m, t, u, v, pt, mod = 1e9 + 7, lf;
ll p[mxn], pain[mxn], mark[mxn];
vector<int> adj[mxn];
vector<ll> e;
ll ans = 0;

int dfs(int i) {
    mark[i] = 1;
    pain[i] = 1;
    for (int nei:adj[i]) 
        if (!mark[nei]) pain[i] += dfs(nei);
    if (i != 1) e.push_back((n - pain[i]) * pain[i]);
    return pain[i];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin >> t;
    while (t--) {
        ans = 0;
        e.clear();
        cin >> n;
        rpt(n + 1) {
            adj[i].clear();
            mark[i] = 0;
            pain[i] = 0;
        }
        rpt(n - 1) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        cin >> m;
        rpt(m) cin >> p[i];
        if (m < n - 1) {
            pt = m;
            while (pt < n - 1) {
                p[pt] = 1;
                pt++;
            }
        }
        ll sz = max(m, n-1);
        sort(p, p + sz);
        if (m > n - 1) {
            pt = m-1;
            while (pt >= n-1) {
                p[pt-1] = p[pt-1] * (p[pt] % mod);
                pt--;
            }
        }  
        dfs(1);
        sort(e.begin(), e.end());
        rpt(n-1) ans = (ans + ((p[i] % mod) * (e[i] %  mod))) % mod;
        cout << ans << "\n";
    }                                           
}