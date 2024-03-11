#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[(int)s1.size()-i-1]) {
            cout << "NO" ;
            return 0;
        }
    }

    cout << "YES";
}