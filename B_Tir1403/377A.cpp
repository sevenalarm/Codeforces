#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 3e5 + 10;
char maze[510][510];
map<int, vector<int>> adj, tre;
int cnt, n, m, k, mark[mxn], d[mxn], root;
string s;
map<int, pair<int, int>> mp;
set<pair<int, int>> st;
pair<int, int> p;


void dfs(int i) {
    mark[i] = 1;
    for (int nei : adj[i]) {
        if (!mark[nei]) {
            tre[i].pb(nei);
            tre[nei].pb(i);
            dfs(nei);
        }
    }
    d[i] = tre[i].size();
    st.insert({d[i], i});
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    rpt(n) {
        cin >> s;
        range(0, m) maze[i][j] = s[j];
    }
    rpt(n) {
        range(0, m) {
            cnt++;
            if (maze[i][j] == '.') {
                root = cnt;
                if (i != 0 && maze[i-1][j] == '.') adj[cnt].pb((i-1) * m + j + 1);
                if (i != n && maze[i+1][j] == '.') adj[cnt].pb((i+1) * m + j + 1);
                if (j != 0 && maze[i][j-1] == '.') adj[cnt].pb(i * m + j);
                if (j != m && maze[i][j+1] == '.') adj[cnt].pb(i * m + j + 2);
                mp[cnt] = {i, j};
            }
        }
    }
    dfs(root);
    while (k--) {
        p = *st.begin();
        maze[mp[p.sd].ft][mp[p.sd].sd] = 'X';
        st.erase(st.begin());
        for (int nei : tre[p.sd]) {
            st.erase({d[nei], nei});
            d[nei]--;
            if (d[nei] > 0) st.insert({d[nei], nei});
        }
    }
    rpt(n) {
        range(0, m) cout << maze[i][j];
        cout << "\n";
    }

}