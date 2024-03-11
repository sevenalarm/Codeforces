#include <bits/stdc++.h>

using namespace std;


int main() {
    int t, n, q, lg;
    long long f = 0;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        long long a[n], x;
        int logs[32][n];
        for (int i=0; i<31; i++) {
            for (int j=0; j<n; j++) {
                logs[i][j] = 0;
            }
        }

        for (int i=0; i<n; i++) {
            cin >> f;
            a[i] = f;
            lg = 0;

            while (f % 2 == 0) {
                lg++;
                f/=2;
            }

            for (int j=1; j<=lg; j++) logs[j][i] = 1;
        } 

        for (int i=0; i<q; i++) {
            cin >> x;

            for (int j=0; j<n; j++ ) {
                if (logs[x][j] == 1) {
                    logs[x][j] = 0;
                    a[j] += pow(2,x-1);
                }
            }
            
        }

        for (int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;


    }
}