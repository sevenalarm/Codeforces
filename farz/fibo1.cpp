#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int fibo[20];
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i=0; i<n; i++) {
        if (i==0 || i==1) cout << 1 << " ";
        else {
            fibo[i] = fibo[i-1] + fibo[i-2];
            cout << fibo[i] << " ";
        }
    }
}