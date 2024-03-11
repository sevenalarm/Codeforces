#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int luck[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    cin >> n;
    string ans = "NO";
    for (int l:luck) {
        if (n % l == 0) {
            ans = "YES";
            break;
        }
    }

    cout << ans;
}