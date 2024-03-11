#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 1;
    int n, i=2, x=0;
    cin >> n;
    while (n >= 1) {
        if (n%i != 0) {
            c *= x+1;
            if (n==1) break;
            x = 0;
            i++;
        } else {
            x++;
            n = n/i;
        }
    }
    cout << c;
}

// seems OK