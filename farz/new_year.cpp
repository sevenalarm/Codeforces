#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int mx = 240 - k; // 50
    int l=0, r=n+1; // l=0 r=5
    int foo, midn;

    while(r-l > 1) {
        foo = (l+r) / 2; //4
        midn = foo * (foo + 1) / 2 * 5; //50
        if (midn <= mx) l = foo; // l = 3
        else r = foo; 
    }

    cout << l << endl;
}

