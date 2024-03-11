#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 4; i++) {
        if (s[i] == '+') ans++;
        else ans--;
    }

    cout << ans;

}