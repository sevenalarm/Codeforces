#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {    
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if ((a>b && a<c) || (a<b && a>c)) cout << a;
        else if ((b>a && b<c) || (b<a && b>c)) cout << b;
        else cout << c;
        cout << endl;
    }
}