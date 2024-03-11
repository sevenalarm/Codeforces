#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int lc = 0, uc = 0;
    for (int i=0; i<s.size(); i++) {
        if (islower(s[i])) lc++;
        else uc++;
    }

    if (lc >= uc) {
        for (int i=0; i<s.size(); i++) {
            if (!islower(s[i])) s[i] += 32;
        }
    } else {
        for (int i=0; i<s.size(); i++) {
            if (islower(s[i])) s[i] -= 32;
        }
    }

    cout << s;
}