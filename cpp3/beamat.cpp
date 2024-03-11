#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, x, y;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> a;
            if (a == 1) {
                x = i+1;
                y = j+1;
            }
        }
    }

    int ans = abs(x - 3) + abs (y - 3);
    cout << ans;
}