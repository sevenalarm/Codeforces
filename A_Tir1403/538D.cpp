#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 110;
char ans[mxn][mxn], a[mxn][mxn];
string s;
int n, mark[mxn][mxn];

void copy(int x, int y, int s) {
    rpt(n) {
        range(0, n) {
            if (a[i][j] == '.') ans[i + n - 1 - x][j + n - 1 - y] = '.'; 
            if (s == 2 && a[i][j] == 'x' && ans[i + n - 1 - x][j + n - 1 - y] == 'x') 
                mark[i][j] = 0;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n) {
        cin >> s;
        range(0, n) {
            a[i][j] = s[j];
            mark[i][j] = (s[j] == 'x');
        }
    }
    rpt(2 * n - 1) range(0, 2 * n - 1) ans[i][j] = 'x';
    ans[n-1][n-1] = 'o';
    rpt(n) {
        range(0, n) {
            if (a[i][j] == 'o') copy(i, j, 1);
        }
    }
    rpt(n) {
        range(0, n) {
            if (a[i][j] == 'o') copy(i, j, 2);
        }
    }
    rpt(n) {
        range(0, n) {
            if (mark[i][j]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES" << endl;;
    rpt(2 * n - 1) {
        range(0, 2 * n - 1) {
            cout << ans[i][j];
        }
        cout << endl;
    }

}