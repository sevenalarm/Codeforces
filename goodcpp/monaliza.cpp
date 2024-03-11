#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int ans = 0;
const int mxn = 6;
pair<int, int> pcs[mxn];
int mark[mxn];
int n, side;
int grid[24][24];
int w, h, s;

bool check_piece(int num, int x, int y) {
    rpt(pcs[num].ft) {
        range(0, pcs[num].sd) {
            if (grid[i][j]) return false;
        }
    }
    return true;
}

void put_piece(int num, int i, int j) {
    rpt(pcs[num].ft) {
        range(0, pcs[num].sd) {
            grid[i][j] = 1;
        }
    }
}

void rmv_piece(int num, int i, int j) {
    rpt(pcs[num].ft) {
        range(0, pcs[num].sd) {
            grid[i][j] = 0;
        }
    }
}

void solve() {
    rpt(side) {
        range(0, side) {
            if (!grid[i][j]){
                for (int k = 0; k < n; k++) {
                    if (!mark[k] && check_piece(k, i, j)) {
                        put_piece(k, i, j);
                        mark[k] = 1;
                        solve();
                    }
                }
            }
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    rpt(n) {
        cin >> w >> h;
        pcs[i].ft = w;
        pcs[i].sd = h;
        s += w * h;
    }
    side = sqrt(s);
    if (side * side == s) {
        solve();
    }
}