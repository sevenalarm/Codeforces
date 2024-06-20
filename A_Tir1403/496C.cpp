#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100 + 10;
int a[mxn][mxn], del[mxn], n, m, ans = 0;
bool poss;
string s;

bool bad(int row, int col) {
    // a[row] > a[row+1]
    rpt(col + 1) {
        if (!del[i] && a[row][i] < a[row+1][i]) return false;
        else if (!del[i] && a[row][i] > a[row+1][i]) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    rpt(n) {
        cin >> s;
        range(0, m) {
            a[i][j] = s[j] - 'a';
        }
    }
    rpt(m) {
        bool poss = true;
        range(0, n-1) {
            if (bad(j, i)) poss = false;
        }
        if (!poss) {
            del[i] = 1;
        }
    }
    rpt(m) ans += del[i];
    cout << ans;
}
