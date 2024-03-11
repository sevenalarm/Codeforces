#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
long long n, t, sec=0, song, passed=0, i=0, total = 0;

int main() {
    cin >> n >> t; // t = 600
    long long a[n];
    for (long long x=0; x<n; x++) {
        cin >> a[x];
        total += a[x];
    }

    if (total < t) {
        t = t % total;
        sec = t / total;
    }
    while (true) {
        // i = 0
        // t = 600
        // n = 3
        sec += a[i]; // 720
        if (sec > t) {
            song = i+1; // 1
            passed = a[i] - (sec - t); // 180 - (720 - 600)
            break;
        }
        i++;
        if (i>=n) i = n%i;
    }

    cout << song << " " << passed;



}