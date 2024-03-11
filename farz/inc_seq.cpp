#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    long long x, now=1;
    cin >> t;
    while (t--){
        cin >> n;
        int b[n];
        now=1;
        for (int i=0; i<n; i++) {
            cin >> x;
            if (now != x) {
                b[i] = now;
                now++;
            } else {
                b[i] = now + 1;
                now += 2;
            }
        } 
        cout << b[n-1] << endl;
    }
}