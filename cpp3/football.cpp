#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 1;
    int dang = s[0];
    for (int i=1; i<s.size(); i++) {
        if (s[i] == dang) {
            cnt++;
            if (cnt >= 7) break;
        } else {
            dang = s[i];
            cnt = 1;
        }
    }

    if (cnt >= 7) cout << "YES";
    else cout << "NO";
}