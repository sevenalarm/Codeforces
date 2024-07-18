#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
int a[mxn], b[mxn], c[mxn], n, t, lr[3];
ll ps[mxn][3], tot;
bool poss;
int ans[3][2];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(3) {
            ps[0][i] = 0;
            lr[i] = 0;
        }
        rpt(n) {
            cin >> a[i + 1];
            ps[i + 1][0] = ps[i][0] + a[i + 1];
        }
        tot = (ps[n][0] + 2) / 3;
        rpt(n) {
            cin >> b[i + 1];
            ps[i + 1][1] = ps[i][1] + b[i + 1];
            if (ps[i + 1][1] >= tot && !lr[1]) lr[1] = i + 1;
        }
        rpt(n) {
            cin >> c[i + 1];
            ps[i + 1][2] = ps[i][2] + c[i + 1];
            if (ps[i + 1][2] >= tot && !lr[2]) lr[2] = i + 1;
        }

        
        rpt(n) if (ps[i + 1][0] >= tot && !lr[0]) lr[0] = i + 1;
        int x, y;
        poss = false;
        rpt(3) {
            if (lr[i]) {
                if (i == 0) x = 1, y = 2;
                else if (i == 1) x = 0, y = 2;
                else x = 0, y = 1;
                range(lr[i] + 1, n) {
                    if ((ps[j][x] - ps[lr[i]][x] >= tot && ps[n][y] - ps[j][y] >= tot)) {
                        poss = true;
                        ans[i][0] = 1, ans[i][1] = lr[i];
                        ans[x][0] = lr[i] + 1, ans[x][1] = j;
                        ans[y][0] = j + 1, ans[y][1] = n;
                    }
                    else if ((ps[j][y] - ps[lr[i]][y] >= tot && ps[n][x] - ps[j][x] >= tot)) {
                        poss = true;
                        ans[i][0] = 1, ans[i][1] = lr[i];
                        ans[y][0] = lr[i] + 1, ans[y][1] = j;
                        ans[x][0] = j + 1, ans[x][1] = n;
                    }
                }
            }
        }

        if (!poss) cout << -1;
        else rpt(3) range(0, 2) cout << ans[i][j] << " "; 
        cout << "\n";
    
    }
}