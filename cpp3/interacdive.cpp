#include <bits/stdc++.h>

// ACCEPTED!
// https://codeforces.com/problemset/problem/1624/F

using namespace std;

int main() {
    int n, now, prev = 0, curp = 1, shift, sum = 0;
    bool dif = false;
    cin >> n;

    int l = 1, r = n + 1;

    while (r - l > 1) {

        if (dif) {
            shift = (pow(2, curp) - 1 ) * n / pow(2, curp);
        }  else {
            // shift = n / pow(2, curp);
            shift = (r-l) / 2;
        }

        // cout << pow(2, curp) << endl;
        // if (shift == 0) shift = 1; 
    
        cout << "+ " << shift << endl;
        cin >> now;
        sum += shift;

        if (now != prev) {
            dif = true;
            l = now * n;
            r += shift; 
        } else {
            dif = false;
            l += shift;
            r = (now + 1) * n;
        }

        prev = now;
        curp ++;

    }

    cout << "! " << l - sum;
}