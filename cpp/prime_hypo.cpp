#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

//only need to check for 2, 3, 5, 7, 11


using namespace std;

int main() {
    int n;
    cin >> n;
    if (n==1) cout << 3;
    else if (n==2) cout << 4;
    else if (n%2 == 1) cout << 1;
    else if (n%3 == 1 || n%3 == 2) cout << 2/(n%3);
    else if (n%5 == 1 || n%5 == 2 || n%5 == 4) cout << 4/(n%5);
    else if (n%5 == 3) cout << 8;
    else if (n%7 == 1 || n%7 == 2 || n%7 == 3 || n%7 == 6) cout << 6/(n%7);
    else if (n%7 == 4 || n%7 == 5) cout << 20/(n%7);
    else if (n%11 == 1 || n%11 == 2 || n%11 == 5 || n%11 == 10) cout << 10/(n%11);
    else if (n%11 == 3 || n%11 == 7) cout << 21/(n%11);
    else if (n%11 == 4 || n%11 == 8) cout << 32/(n%11);
    else if (n%11 == 6 || n%11 == 9) cout << 54/(n%11);
}