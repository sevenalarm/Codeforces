#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        bool poss = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                poss = true;
            }
        }

        if (poss == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}