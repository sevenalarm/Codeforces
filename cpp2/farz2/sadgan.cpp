#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int aa = a/100 + (a%100 - a%10) + a%10 * 100;
    int bb = b/100 + (b%100 - b%10) + b%10 * 100;

    // cout << aa << " " << bb << endl;
    if (aa < bb) {  
        cout << a << " < " << b;
    } else if (aa > bb) {
        cout << b << " < "  << a;
    } else cout << a << " = " << b;
}