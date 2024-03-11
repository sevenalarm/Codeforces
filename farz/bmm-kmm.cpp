#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    // bmm
    // int bmm=0, prv=1;
    // int aa=a, bb=b;
    // while (bmm != prv){
    //     prv = bmm; //
    //     bmm = abs(aa-bb);
    //     if (aa > bb) aa = bmm;
    //     else bb = bmm;
    // }

    int bmm = 0;
    int val = 0;
    int mn = min(x,y); // 45
    int mx = max(x,y); // 1515
    while (mn != 0) {
        val = mx;
        mx = mn; // mx = 45
        mn = val % mn; // mn = 30
    }

    bmm = mx;

    // kmm
    int kmm = x*y / bmm;

    cout << "bmm: " << bmm << endl;
    cout << "kmm: " << kmm << endl; 

    
}

//seems OK