#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, c=1;
    cin >> n;
    cout << 1 << " ";
    i = 2;
    while (i <= n/2) {
        if (n%i == 0) cout << i << " ";
        i++;
    }

    if (n>1) cout << n;
}   

//seems OK