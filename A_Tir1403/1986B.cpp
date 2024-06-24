#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100 + 10;
int a[mxn][mxn], ans[mxn][mxn];
vector<pair<int, int>> bad;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        rpt(mxn) range(0, mxn) a[i][j] = 0;
        rpt(n) {
            range(0, m) {
                cin >> a[i+1][j+1];
                ans[i+1][j+1] = a[i+1][j+1];
            }
        }

        rpt(n) {
            range(0, m) {
                if (a[i+1][j+1] > a[i][j+1] && a[i+1][j+1] > a[i+1][j] && 
                    a[i+1][j+1] > a[i+2][j+1] && a[i+1][j+1] > a[i+1][j+2]) {
                        ans[i+1][j+1] = max(a[i][j+1], max(a[i+1][j], max(a[i+2][j+1], a[i+1][j+2])));
                }
                cout << ans[i+1][j+1] << ' ';
            }
            cout << "\n";
        }
    }
}