#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 10;
char grid[mxn][mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        string ans = "e";
        cin >> n;
        rpt(n) {
            cin >> s;
            range(0, n) {
                grid[i][j] = s[j];
            }
        }
        rpt(n) {
            range(0, n) {
                if (grid[i][j] == '1') {
                    if ((grid[i+1][j] == '1') && (grid[i][j+1] == '1')) ans = "SQUARE";
                    else ans = "TRIANGLE";
                    break;
                }
            }
            if (ans != "e") break;
        }
        cout << ans << endl;
    }
}