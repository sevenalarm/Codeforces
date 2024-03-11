#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << s / (n/2 + 1) << endl;
    }
}