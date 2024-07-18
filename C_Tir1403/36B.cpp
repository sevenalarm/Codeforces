#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 500;
char a[mxn][mxn], p[mxn][mxn];
int n, k, u, mxu;
string s;

void paint(int ii, int jj, int u) {
    rpt(n) {
        range(0, n) {
            for (int x = i * (u / n); x < i * (u / n) + u / n; x ++) {
                for (int y = j * (u / n); y < j * (u / n) + u / n; y ++) {
                    a[ii + x][jj + y] = p[i][j];
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin >> n >> k;
    u = pow(n, k);
    mxu = u;
    rpt(n) {
        cin >> s;
        range(0, n) p[i][j] = s[j];
    }
    rpt(u) range(0, u) a[i][j] = '.';
    while (k--) {
        for (int i = 0; i < mxu; i += u) {
            for (int j = 0; j < mxu; j += u) {
                bool white = true;
                for (int x = i; x < i + u; x++) {
                    for (int y = j; y < j + u; y++) {
                        if (a[x][y] == '*') white = false;
                    }
                }
                if (white) paint(i, j, u);
            }
        }
        u /= n;
    }

    rpt(mxu) {
        range(0, mxu) cout << a[i][j];
        cout << endl;
    }
}