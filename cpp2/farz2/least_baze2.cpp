#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int mn = a[0], mx = 0, sum = 0;

    for (int i=1; i<n; i++) {
        if (sum - mx + a[i] < mn) mn = sum - mx + a[i];
        sum += a[i];
        if (sum > mx) mx = sum;
        
    }
    
    cout << mn;
}