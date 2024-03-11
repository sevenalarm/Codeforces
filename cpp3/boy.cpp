#include <bits/stdc++.h>

using namespace std;
int lets[27];
int main() {
    string s;
    cin >> s;
    int dist = 0;
    for (int i=0; i<s.size(); i++) {
        if (lets[s[i]] == 0) {
            dist ++;
        }

        lets[s[i]] ++;
    }

    if (dist%2 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}