#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long long n, jazr, l, r, mid;

int main()
{
    cin >> n;

    // O(sqrt(n))

    // for (int i=1; i<=n/2; i++) {
    //     if (i*i > n){
    //         jazr = i-1;
    //         break;
    //     }
    // }
    // cout << jazr;

    // O(log(n))

    l = 1, r = n + 1;

    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (mid * mid == n) {
            l = mid;
            r = mid;
            break;

        } else if (n < mid * mid) r = mid;
        else l = mid;

    }

    if (l==r) cout << "Square root of " << n << " is equal to " << l;
    else cout << "Square root of " << n << " is between " << l << " and " << r;

    
}