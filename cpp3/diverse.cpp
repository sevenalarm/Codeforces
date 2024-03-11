#include <bits/stdc++.h>

// ACCEPTED
// https://codeforces.com/problemset/problem/1073/A

using namespace std;

int main() {
    int n, ansi = -1, ansj = -1;
    cin >> n;
    string s;
    cin >> s;
    int lc[n][27], ls[27];

    for (int i=0; i<n ; i++) {
        for (int j=0; j<27; j++) lc[i][j] = 0;
    }

    for (int i=0; i<27; i++) ls[i] = 0;

    for (int i=0; i<n; i++) {
        int c = (int)s[i] - 96;
        ls[c]++;
        for (int j=1; j<27; j++) lc[i][j] = ls[j];
        
    }

    // for (int i:ln) cout << i << " ";

    for (int i=0; i<n; i++) { // 0

        for (int j=i; j<n; j++) { // 0

            bool valid = true;

            for (int k=1; k<27; k++) {
                int cnt;
                if (i == 0) cnt = lc[j][k]; // 3
                else cnt = lc[j][k] - lc[i-1][k];

                // if (k==15) cout << cnt << endl;

                if (cnt > (j-i+1)/2) {
                    valid = false;
                    break;
                }
            }

            if (valid == true) {
                ansi = i;
                ansj = j;
                break;
            }

        }

        if (ansi != -1) break;
 
    }

    if (ansi == -1) cout << "NO";
    else {
        cout << "YES" << endl;
        // cout << ansi << " " << ansj << endl;
        cout << s.substr(ansi, ansj-ansi+1) ;
    }
    
}