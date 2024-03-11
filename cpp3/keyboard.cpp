#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, res;
        int prv;
        cin >> s;
        vector<int> prvl, prvu;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {

                s[i] = ' ';
                if (prvl.size() != 0) {
                    prv = prvl.back();
                    s[prv] = ' ';
                    prvl.pop_back();
                }

            } else if (s[i] == 'B') {
                 
                s[i] = ' ';
                if (prvu.size() != 0) {
                    prv = prvu.back();
                    s[prv] = ' ';
                    prvu.pop_back();
                }

            } else {
                if (islower(s[i])) prvl.push_back(i);
                else prvu.push_back(i);
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') cout << s[i];
        }

        cout << endl;
    }
}