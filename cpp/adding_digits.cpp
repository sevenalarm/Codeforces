#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int a, b, n;
    cin >> a >> b >> n;
    string res = to_string(a);
    if ((a*10) % b == 0) {
        for (int i=0; i<n; i++) res+= '0';
        cout << res;
    } else if (b - ((a*10) % b) > 9) cout << -1;

    else {
        res += to_string(b - ((a*10) %b));
        for (int i=0; i<n-1; i++) res += '0';
        cout << res;
    }

}