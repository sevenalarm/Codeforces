#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, sz = 0;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1;
        cin >> s2;
        long long ans = 0;
        if (s2 == "a") ans = 1; 
        else {
            for (int i=0; i<s2.size(); i++) {
                if (s2[i] == 'a') {
                    ans = -1;
                    break;
                }
            }

            if (ans != -1) {
                sz = s1.size();
                ans = pow (2, sz);
            }
        }
        cout << ans << endl;

    }
}