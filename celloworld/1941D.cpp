#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e3 + 10;
int candi[mxn], mark[mxn][2];
int n, m, t, d, cnt, x, cw, ccw;
char s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> m >> x;
        rpt(n + 1) {
            candi[i] = -1;
            mark[i][0] = 0;
            mark[i][1] = 0;
        }
        candi[x] = 0;
        mark[x][0] = 1;
        rpt(m) {
            cin >> d >> s;
            for (int k = 0; k < n+1; k++) {
                if (mark[k][1] == 1) {
                    mark[k][0] = 1;
                    mark[k][1] = 0;
                }
            }
            range(1, n + 1) {
                if (mark[j][0] == 1) {
                    mark[j][0] = 0;
                    if (j + d <= n) cw = j + d;
                    else cw = j + d - n;
                    if (j > d) ccw = j - d;
                    else ccw = n - d + j;
                    if (s == '0') {
                        candi[cw] = i + 1;
                        mark[cw][1] = 1;
                    }
                    else if (s == '1') {
                        candi[ccw] = i + 1;
                        mark[ccw][1] = 1;
                    }
                    else {
                        candi[cw] = i + 1;
                        candi[ccw] = i + 1;
                        mark[cw][1] = 1;
                        mark[ccw][1] = 1;
                    }
                    // cout << j << ": " << cw << "  " << ccw << "\n";
                    // rpt(n + 1) cout << candi[i] << " ";
                    // cout << "\n";
                }
            }
            // cout << "\n";
        }
        // rpt(n + 1) cout << candi[i] << " ";
        // cout << "\n";
        rpt(n + 1) if (candi[i] == m) cnt++;
        cout << cnt << "\n";
        rpt(n + 1) if (candi[i] == m) cout << i << " ";
        cout << "\n";
    }
}