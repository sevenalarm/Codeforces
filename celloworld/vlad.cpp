#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1926/problem/G

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int mark[mxn], t, n, x, ans = 0, a[mxn];
vector<int> adj[mxn];
string s;

void make(int i) {
    int cnts = 0, cntp = 0;
    mark[i] = 1;
    if (s[i] == 'C') {
        for (int nei:adj[i]) {
            cnts += (s[nei] == 'S');
            cntp += (s[nei] == 'P');
        }
        if (cntp >= cnts) s[i] = 'P';
        else s[i] = 'S';
    }

    for (int nei:adj[i]) {
        if (!mark[nei]) make(nei);
    }
}

void cost() {
    rpt(n-1) { // 0 
        ans += ((s[i+1] == 'P' && s[a[i+1]] == 'S') || (s[i+1] == 'S' && s[a[i+1]] == 'P'));
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        rpt(n) {
            adj[i].clear();
            mark[i] = 0;
            a[i] = 0;
        }
        range(1, n) {
            cin >> x;
            a[j] = x-1;
            adj[j].push_back(x-1);
            adj[x-1].push_back(j);
        }
        cin >> s;
        rpt(n) {
            if (s[i] == 'P' || s[i] == 'S') {
                make(i);
                cost();
                break;
            }
        }
        // rpt(n) cout << a[i] << " ";
        // cout << endl;
        cout << ans << "\n";
    }
}