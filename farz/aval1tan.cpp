#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    for (int i=2; i<=n; i++) {
        bool p = true;
        for (int j=2; j<=i/2; j++) {
            if (i%j == 0) {
                if (i==2) break;
                p = false;
                break;
            }
        }
        if (p) cout << i << " ";
    }
}

// seems OK