#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int b;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];

    int mx = 0, sum = 0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            sum = 0;
            for (int x=i; x<j; x++) sum += a[x];
            if (sum > mx) mx = sum;
        }
    }

    cout << mx;
}