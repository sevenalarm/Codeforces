#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], b[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        } 

        sort(b, b+n);
        string ans = "YES";
        if (n%2 == 1) {
            if (a[0] != b[0]) ans = "NO";
            else {
                int i = 1;
                while (i<n-2) {
                    if ( ((a[i] == b[i] && a[i+1] == b[i+1])  || (a[i] == b[i+1] && a[i+1] == b[i])) == false) {
                        ans = "NO";
                        break;
                    }
                    i+= 2;
                }
            }
        } else {
            int i = 0;

            while (i<n-1) {
                if ( ((a[i] == b[i] && a[i+1] == b[i+1]) || (a[i] == b[i+1] && a[i+1] == b[i])) == false) {
                    ans = "NO";
                    break;
                }
                i += 2;
            }
        }

        cout << ans << endl;


    }
}