#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I' || s[i] == 'Y' || s[i] == 'E' || 
            s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'y' || s[i] == 'e') {
                continue;
            }
        else {
            cout << ".";
            if (islower(s[i]) == false) cout << (char) (s[i] + 32);
            else cout << s[i];
        }
    }
}