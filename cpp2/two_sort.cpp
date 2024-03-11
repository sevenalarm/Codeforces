
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    long long x;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];


        int i = 1, m = 1;
        bool nondec = true;
        x = pow(2, m); // 2

        while (i + x < n) {  // i+x = 3
            for (int j = i+1; j <= i + x - 1 ; j++) {
                if (a[j] > a[j+1]) {
                    nondec = false;
                    break;
                }
            }
            if (nondec == false) break;
            else i += x; // 3
            m++; // 2
            x = pow(2, m); // 4
        }

        if (nondec) {
            for (int j = i+1 ; j<n-1; j++) {
                if (a[j] > a[j+1]) {
                    nondec = false;
                    break;
                }
            }
        }
        

        if (nondec) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}