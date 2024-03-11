#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// binary search

long long size, last;


int main() {
    cin >> size;
    string ans;
    last = 0;
    while (size > 1) {
        size /= 2;
        cout << "Is your number less than " << last + size << " ?\n";
        cin >> ans;
        if (ans == "no") last += size;
    }

    cout << endl << "Your number is " << last << "!";


}