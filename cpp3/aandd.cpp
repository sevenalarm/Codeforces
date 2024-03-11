#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnta = 0, cntd = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') cnta++;
        else cntd++;
    }

    if (cnta > cntd) cout << "Anton";
    else if (cnta < cntd) cout << "Danik";
    else cout << "Friendship";
}