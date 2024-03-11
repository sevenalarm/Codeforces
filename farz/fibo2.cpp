#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int fibo[100];
    fibo[0] = 1, fibo[1] = 1;
    for (int i=2; i<100; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    int n, c=1;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (i==fibo[c]) {
            cout << "+";
            c++;
        } else cout << "-";
    }

}


// ACCEPTED 
// https://quera.org/problemset/17675/submissions/