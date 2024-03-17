#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e5 + 10;
const int mxm = 3e5 + 10;
int n, m, mark[mxn], dor[mxn], k, tmp, u, v, color = 1;
vector<int> adj[mxn];
set<pair<int, int>> edges;
bool poss = true;

void dfs(int i) { // 1 / 2 / 3 / 5 / 4 
    mark[i] = color; // 1:1, 2:2, 3:3, 5:4, 4:5, 6:6
    color++; // 7
    for (int nei : adj[i]) { // 2 / 3 / 5 / 4 / 2
        if (!mark[nei]) {
            edges.insert({i, nei}); 
            dor[nei] = i; // 2:0 , 3:0 , 4:0 , 5:3 , 6:0
            dfs(nei);
            if (dor[nei] != 0) {
                cout << i << "! " << nei << ":" << dor[nei] << endl;
                poss = false;
                break;
            }
        } else {
            if (dor[i] != nei && mark[nei] <= mark[i]) {
                if (edges.find({nei,i}) == edges.end()) edges.insert({i, nei});
                k = i; // 4
                while (dor[k] && k != nei) { 
                    tmp = dor[k]; // 4
                    dor[k] = 0; //  
                    k = tmp; // 4
                } 
                cout << nei << " " << i << "| " << endl;
            } else if (dor[i] != nei && mark[nei] > mark[i]) {
                cout << nei << ':' << mark[nei] << " " << i << ':' << mark[i] << endl;
            }
        }
    }
    color--;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    rpt(m) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1);
    cout << endl;
    if (!poss) cout << 0;
    else {
        for (pair<int, int> x : edges) cout << x.ft << " " << x.sd << "\n";
    }
}