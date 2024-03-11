#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
set<pair<pair<int, int>, int>> d, c;
int pbc[mxn], pbd[mxn], n, p, b, C, D, cc, dd, cd, i, mx = 0;
char ltr;
pair<pair<int, int>, int> pai;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    d.insert({{mxn, 0}, n});
    c.insert({{mxn, 0}, n});
    cin >> n >> C >> D;
    rpt(n) {
        cin >> b >> p >> ltr;
        if (ltr == 'C') c.insert({{p, b}, i});
        else d.insert({{p, b}, i});
    }

    auto it = prev(c.upper_bound({{C, 0}, 0}));
    cd += (*it).ft.sd;
    it = prev(d.upper_bound({{D, 0}, 0}));
    cd += (*it).ft.sd;

    it = c.begin();
    pbc[0] = (*it).ft.sd;
    it++, i = 1;
    while(it != c.end()) {
        pbc[i] = max(pbc[i-1], (*it).ft.sd);
        pai = *it;
        c.erase(it);
        pai.sd = i;
        c.insert(pai);
        i++, it++;
    }
    it = c.begin();
    mx = pbc[0];
    it++;
    while(it != c.end()) {
        auto it2 = c.upper_bound({{C - (*it).ft.ft, 0}, 0});
        
    }
    
}