#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n], foo;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    bool poss = true;
    for (int i=n-2; i>=0; i--) {
        if (a[i] - 1 == a[i+1]) {
            poss = false;
            break;
            
        } else if (a[i] > a[i+1]) { 
            int j = i;
            while (j+1<n) {

                if (a[j] > a[j+1]) {
                    if (a[j] - 1 == a[j+1]) {
                    poss = false;
                    break;
                    }

                    // swap
                    foo = a[j+1];
                    a[j+1] = a[j] - 1;
                    a[j] = foo + 1;
                    
                    j++;

                } else break;
                
            }
        }
    }

    if (poss == false) cout << ":(";
    else {
        for (long long x:a) cout << x << " ";
    }
}