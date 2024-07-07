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
map<int, int> mark, mas;
int n, m, k, u, v, sar, label = 1, mn = 2e9;
bool are;
vector<int> p;

void findsar(int i) {
    p.pb(i);
    mark[i] = label;
    label++;
    for (int nei : aj[i]) {
        if (!mark[nei]) {
            findsar(nei);
            return;
        }
    }   
    sar = i;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    rpt(m) {
        cin >> u >> v;
        aj[u].pb(v);
        aj[v].pb(u);
    }
    findsar(1);
    mas[sar] = 1;
    for (int nei : aj[sar]) {
        mas[nei] = 1;
        mn = min(mark[nei], mn);
    }
    cout << mark[sar] - mn + 1 << endl;
    for (int i : p) {
        if (mas[i]) are = true;
        if (are) cout << i << ' ';
    }
}