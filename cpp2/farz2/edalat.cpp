#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    long long a = k / n, b;
    if (k % n == 0) b = a;
    else b = a + 1;
    int ac = n - k%n;
    int bc = n - ac;
    string row[ac + bc];
    for (int i=0; i<ac; i++) row[i] = to_string(a);
    for (int i=0; i<bc; i++) row[ac + i] = to_string(b);

    int x = 0, j;
    for (int i=0; i<n; i++) {
        j = i;
        for (int r=0; r<(bc + ac)-1; r++) {
            cout << row[j] << " ";
            j++;
            if (j >= (bc + ac)) j = (bc + ac) % j;
        }
        cout << row[j] << endl;
    }
    
}