#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mx=0, ind = 0, x;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x>mx) {
            mx = x;
            ind = i+1;
        }
    }

    cout << ind;
}