#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 110;
char grid[mxn][mxn];
int n, m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    rpt(n) {
        range(0, m) grid[i][j] = '.';
    }

    rpt(m) {
        grid[0][i] = 'A';
        if (m > 1 && i > 0) grid[1][i] = 'B';
    }
    rpt(n) {
        grid[i][0] = 'A';
        if (n > 1 && i > 0) grid[i][1] = 'B';
    }

    rpt(n) {
        range(0, m) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
}