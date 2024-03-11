#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool baghi = n%5;
    cout << n/5 + baghi;
}