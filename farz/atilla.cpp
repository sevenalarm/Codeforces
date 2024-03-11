#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, min=0, x;
    char c;
    cin >> t;
    while(t--){
        cin >> n;
        min=0;
        while(n--) {
            cin >> c;
            x = (int) c;
            x-=96;
            if (x>min) min = x;
        }
        cout << min << endl;
    }
}