#include <bits/stdc++.h>

using namespace std;
const int mxn = 1000;
int bin[mxn][31], a[mxn][mxn];
int ans[mxn];

int main() {
    int t, n;
    int x;
    cin >> t;
    while (t--) {
        for (int i = 0; i < mxn; i++) {
            for (int j = 0; j < 31; j++) {
                bin[i][j] = 1;
            }
        }

        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> x;
                a[i][j] = x;
                if (i != j) {
                    for (int k = 0; k < 31; k++) {
                        if (x % 2 == 0) {
                            bin[i][k] = 0;
                            bin[j][k] = 0;
                        }

                        x /= 2;
                    }
                }
            }
        }

        // for (int i = 0; i < 31; i++) {
        //     cout << i << ": ";
        //     for (int j = 0; j < n; j++) {
        //         cout << bin[j][i] << " ";
        //     }
        //     cout << endl;
        // }

        // cout << endl;

        long long m1, m2, one = 1;
        bool poss = true;
        if (n == 1) ans[0] = a[0][0];
        else {
            for (int i = 0; i < n; i++) {
                m1 = 0;
                for (int k = 0; k < 31; k++) {
                    if (bin[i][k] == 1)
                        m1 += one << k;
                }

                for (int j = i + 1; j < n; j++) {
                    m2 = 0;
                    for (int k = 0; k < 31; k++) {
                        if (bin[j][k])
                            m2 += one << k;
                    }
                    if ((m1 | m2) != a[i][j]) poss = false;

                }

                if (poss) ans[i] = m1;
            }
        }

        if (poss) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) cout << ans[i] << " ";
            cout << endl;
        } else cout << "NO" << endl;

        
    }
}