#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sofar=1, mx=1;
    cin >> n;
    long long x, pre;
    for (int i=0; i<n; i++) {
        if (i==0) cin >> pre;
        else {
            cin >> x;
            if (x>=pre) {
                sofar ++;
            } else {
                sofar = 1;
            }
            pre = x;
            if (sofar > mx) mx = sofar;
        }

    }

    cout << mx;
}