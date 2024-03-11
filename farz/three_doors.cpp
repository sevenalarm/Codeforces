#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, x, y;
    string open = "YES";
    cin >> t;
    while(t--){
        open = "YES";
        cin >> y; 
        for (int i=0; i<3; i++){ 
            cin >> x;
            if (x==i+1 || (x==0 && i+1==y)){
                open = "NO";
            }
        }
        cout << open << endl;
    }
}

// ACCEPTED
// https://codeforces.com/problemset/status?my=on