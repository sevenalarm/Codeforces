#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n], sum = 0, cost = 0, x=0;
        for (int i=0 ; i<n; i++ ){
            cin >> a[i];
            sum += a[i];
        }
        int sz = sizeof(a) / sizeof(a[0]);
        sort(a, a+sz);

        // a = [1 1 1 2]
        // sum = 5
        // cost = 0

        for (int i=n-1; i>=0; i--) { // a[i] = 1
            if (sum < 1) break;
            if (sum == 1) {
                cost++; 
                break;
            }
            if (a[i] <= sum - a[i]) { // 2 <= 5 - 2

                if (a[i] != 1) cost += a[i] + 1; // cost += 2 + 1 = 3
                else cost += 1;

                sum -= a[i] * 2; // sum = 5 - 2 * 2 = 5 - 4 = 1
            } else { 
                cost += 1 ; // cost = 1
                if (sum - a[i] > 1) cost += sum - a[i]; // cost = 2

                sum = sum - 2 * (sum - a[i]); // sum = 7 - 2(7-6) = 5

                if (sum == 1) cost++; 
                else if (sum % 2 == 0) cost += sum/2 + 1;
                else cost += sum/2 + 2; 

                break;    
            }
        }
        cout << cost << endl;

    }
    
    
}