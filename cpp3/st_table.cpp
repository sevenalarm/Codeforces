#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    char c, prev;

    cin >> n;
    for (int i = 0; i < n ; i++) {
        cin >> c;
        if (i == 0) prev = c;
        else {
            if (c == prev) ans++;
            else prev = c;
        }
    }

    cout << ans;

}