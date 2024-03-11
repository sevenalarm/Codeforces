#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb(a) push_back((a))

const int mxn = 1e5 + 10;
int p[mxn], n, m, t, u, v, pt, mod = 1e9 + 7;
vector<int> adj[mxn];
vector<ll> e;
ll ans = 0;

int dfs(int i, int mom) { // 1, 0 / 2, 1 / 3, 2 / 
    int pain = 1; // 1 / 1 / 1 / 1

    for (int nei:adj[i]) 
        if (nei != mom) pain += dfs(nei, i);
    
    e.pb((n - pain) * pain);
    cout << i << " " << (n - pain) * pain << endl;
    return pain;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        rpt(n - 1) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        // cin >> m;
        // rpt(m) cin >> p[i];
        // sort(p, p + m);
        dfs(1, 0);
        sort(e.begin(), e.end());
        // pt = m-1;
        // while (pt > n-1) {
        //     p[pt-1] = (p[pt-1] * (p[pt] % mod)) % mod;
        //     pt--;
        // }
        // rpt(n-1) cout << p[i] << " ";
        // cout << endl;
        // rpt(n-1) cout << e[i] << " ";
        cout << endl;
        // rpt(n-1) ans = (ans + ((p[i] % mod) * (e[i] % mod) % mod)) % mod;
        // cout << ans << "\n";
    }
}