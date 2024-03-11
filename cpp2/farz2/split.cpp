#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    long long a[n], b[n];
    long long sum = 0;
    int ans = 0, ans1 = 1, ans2 = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        b[i] = sum;
    }
    
    // b = [3 0 3 0 3 0 3 0 3 0 3 0]

    if (sum % 3 == 0) {
        long long trd = sum / 3; // 0
        int l = 0, r = n-3, trdi, trdi2;

        while (r-l > 1) {
            int mid = (l+r) / 2;
            if (b[mid] >= trd) r = mid;
            else l = mid;
        }

        if (b[r] != trd) ans = 0;
        else {
            trdi = r;
            l = r;
            r = n-2;
            while (r-l > 1) {
                int mid = (l+r) / 2;
                if (b[mid] >= trd * 2 + 1) r = mid;
                else l = mid;
            }
            if (b[l] != 2 * trd) ans = 0;
            else {
                trdi2 = l;
                
            }
        }   
        

        
        

    } else ans = 0;

    cout << ans;
}