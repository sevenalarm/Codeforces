#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int mx = max(a,b);
    int poss = 0;
    for (int i=1; i<=6; i++) {
        if (i >= mx) poss ++;
    }
    if (poss == 6) cout << "1/1";
    else if (poss == 0) cout << "0/1";
    else if (poss == 1 || poss == 5) cout << poss << "/6";
    else if (poss == 2 || poss == 4) cout << poss/2 << "/3";
    else cout << poss/3 << "/2";
}