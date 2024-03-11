#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // مثلث توخالی
    // cout << "*" << endl;
    // for (int i=0; i<n-2; i++) {
    //     cout << "*";
    //     for (int j=0; j<i; j++) cout << ' ';
    //     cout << "*" << endl;
    // }
    // for (int i=0; i<n; i++) cout << "*";


    // مثلث برعکس
    // for (int dis=0; dis<n; dis++) {
    //     for (int j=0; j<dis; j++) cout << " ";
    //     for (int j=0; j<n-dis; j++) cout << "*";
    //     cout << endl;
    // }

    // قطر
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=n; j++) {
    //         cout << i*j << " ";
    //     }
    //     cout << endl;
    // }

    // plus
    // for (int i=1; i<=2*n+1; i++){
    //     for (int j=1; j<=2*n+1; j++) {
    //         if (j==n+1 || i==n+1) cout << "*";
    //         else cout << " ";
    //     }
    //     cout << endl;
    // }

    // hasht
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if (abs(n/2 - j) == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }




}   