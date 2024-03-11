#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        

        // B = 0 , R = 1
        int mn = n + m - 2;
        if (k < mn) cout << "NO" << endl;
        else if (mn % 2 != k % 2) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            n--;
            m--;
            int horz[n+1][m];
            int vert[n][m+1];

            for (int i = 0; i <= n; i++) {
                for (int j = 0; j < m; j++) {
                    horz[i][j] = 0;
                    
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= m; j++) {
                    vert[i][j] = 0;
                }
            }

            bool red = false;
            for (int i = 0; i < n; i++) {
                vert[i][0] = red;
                red = !red;
            }

            for (int j = 0; j < m; j++) {
                horz[n][j] = red;
                red = !red;
            }

            vert[0][1] = 1;
            if (red) {
                vert[n-1][m] = 1;
                vert[n-1][m-1] = 1;

            } else {
                vert[n-1][m] = 0;
                vert[n-1][m-1] = 0;
                horz[n-1][m-1] = 1;
            }

            for (int i = 0; i <= n; i++) {
                for (int j = 0; j < m; j++) {
                    if (horz[i][j] == 0) cout << "B ";
                    else cout << "R ";
                }
                cout << endl;
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= m; j++) {
                    if (vert[i][j] == 0) cout << "B ";
                    else cout << "R ";
                }
                cout << endl;
            }
        }
    }
}