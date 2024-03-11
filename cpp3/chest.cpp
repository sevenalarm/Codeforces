#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/1895/A

using namespace std;

int main() {
    int t, chest, key, k;
    cin >> t;
    while (t--) {
        cin >> chest >> key >> k;
        if (chest > key) cout << chest << endl;
        else {
            chest += k;
            if (chest >= key) cout << key << endl;
            else cout << key + key - chest << endl;
        }
    }
}