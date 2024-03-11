#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int b;
int main() {
    int n;
    cin >> n;
    int a[n], ps[n], px[n], pm[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int mx = 0;

    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += a[i];
        ps[i] = sum;
        if (sum > mx) mx = sum;
        px[i] = mx;
    }

    int mn = px[0];
    for (int i=0; i<n; i++) {
        pm[i] = ps[i] - px[i];
        if (pm[i] < mn) mn = pm[i];
    }
    cout << mn;


    // az aval - O(n)

    // int sum = 0;
    // for (int i=0; i<n; i++) {
    //     sum += a[i];
    //     a[i] = sum;
    //     if (sum > mx) mx = sum;
    // }


    // baze - O(n2)

    // int sum = 0;
    // for (int i=0; i<n; i++) {
    //     sum += a[i];
    //     a[i] = sum;
    //     if (sum > mx) mx = sum;
    // }

    // int ii, jj;
    // for (int i=0; i<n; i++) {
    //     for (int j=i; j<n; j++) {
    //         if (a[j] - a[i] > mx) {
    //             mx = a[j] - a[i];
    //             ii = i;
    //             jj = j;
    //         } 
    //     }
    // }
    
    


    // cout << ii+1 << " to " << jj+1 << endl;



    // baze - O(n3)

    // int sum = 0;
    // for (int i=0; i<n; i++) {
    //     for (int j=i; j<n; j++) {
    //         sum = 0;
    //         for (int x=i; x<j; x++) sum += a[x];
    //         if (sum > mx) mx = sum;
    //     }
    // }

    // cout << mx;
}