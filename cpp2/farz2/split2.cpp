#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;

    long long ps[n], se[n], se2[n];
    long long sum = 0, x, ans = 0;
    int dosec = 0;

    for (int i=0; i<n; i++) {
        cin >> x;
        sum += x;
        ps[i] = sum;
    }

    // ps = [0 1 0 0]
    // se = [1 0 1 1]
    // dosec = 2
    // se2 = [0 0 1 2]
    if (sum % 3 == 0) {
        long long trd = sum / 3; // 0

        for (int i = 0; i < n; i ++) { // 3
 
            if (ps[i] == trd) se[i] = 1;
            else se[i] = 0;

            if ((ps[i] == 2 * trd) && i > 0 && i < n-1) {
                dosec ++;
            } 

            se2[i] = dosec;
        }

        for (int i = 0; i < n; i ++) {
            if (se[i] == 1) ans += dosec - se2[i];
        }

        
    } else ans = 0;

    cout << ans;
} 