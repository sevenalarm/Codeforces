#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x=0;
    cin >> n;
    string a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        for (int j=0; j<a[i].size() -1; j++) {
            if (a[i][j] == '+' && a[i][j+1] == '+') x++;
            else if (a[i][j] == '-' && a[i][j+1] == '-') x--;
        }
    }
    cout << x;
    
}