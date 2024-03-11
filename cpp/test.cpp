#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // double a, b, c;
    // cin >> a >> b >> c;
    // cout << (a+b+c)/3;
    double avg, x;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        avg += x;
    }

    cout << avg/n;
}