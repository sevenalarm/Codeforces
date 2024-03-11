#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define lb lower_bound
#define ub upper_bound
#define mkp make_pair

// map<int, int> row, col;
set<pair<int, int>> row, col; // chandomie, taa chand khorde,
const int mxn = 2e5 + 10;
int q, n, x, y;
char ltr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> q;
    row.insert({0, 0});
    col.insert({0, 0});
    rpt(q) {
        cin >> x >> y >> ltr; 
        if (ltr == 'U') {
            auto it = row.lb({x, y}); 
            if (it == col.end()) it--;
            cout << y - (*it).sd << endl; 
            col.insert({(*it).sd + 1, x});

        } else { 
            auto it = col.lb({y, x});
            if (it == col.end()) it--;
            cout << x - (*it).sd << endl;
            row.insert({(*it).sd + 1, y});
        }
    }
}