#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1000 + 10;
int mark[mxn], n, x, y, ans;
vector<int> rows[mxn], cols[mxn];
pair<int, int> tape[mxn];

void dfs(int i) {
    mark[i] = 1;
    for (auto nei:cols[tape[i].ft]) {
        if (!mark[nei]) 
            dfs(nei);
    }
    for (auto nei:rows[tape[i].sd]) {
        if (!mark[nei]) 
            dfs(nei);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n) {
        cin >> x >> y;
        cols[x].push_back(i);
        rows[y].push_back(i);
        tape[i] = {x, y};
    }
    ans = 0;
    rpt(n) {
        if (!mark[i]) {
            ans++;
            dfs(i);
        }
    }
    cout << ans - 1;
}
