#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, num = 0;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        num = 0;
        int c1=0, c2=0;
        c1 = (int)s[0];
        c2 = (int)s[1];
        num += 25 * (c1 - 97);

        // cout << c1 << " " << c2 << endl;

        if (c2 > c1) num += (c2 - 97);
        else num += (c2 - 96);
        cout << num << endl;
    }
}