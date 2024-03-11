#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn, x;
    cin >> n;
    cin >> mn;
    n--;
    while (n--) {
        cin >> x;
        if (x<mn) mn = x;
    }
    cout << mn;
}

//seems OK