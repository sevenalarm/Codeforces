#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, eic = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        if (s[i] == '8') eic++;
    }

    int ans = min(n/11, eic);
    cout << ans;

}