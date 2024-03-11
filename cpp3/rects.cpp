#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, prev;
    cin >> n;
    bool ans = true;
    for (int i = 0; i<n; i++) {
        cin >> x >> y;
        if (i != 0) {
            if (x <= prev && y <= prev) prev = max(x, y);
            else {
                if (x <= prev) prev = x;
                else if (y <= prev) prev = y;
                else ans = false;
            }
        } else prev = max(x, y);
    }

    if (ans) cout << "YES";
    else cout << "NO";

}