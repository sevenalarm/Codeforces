#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;

    // Brute Force O(n3)

    // for (int i=1; i<n-1; i++) {
    //     for (int j=1; j<n-1; j++) {
    //         for (int x=1; x<n-1; x++) {
    //             if ((i+j+x == n) && (i+j > x) && (i+x > j) && (j+x > i) && (i>=j && j>=x)) {
    //                 cout << i << " " << j << " " << x << endl;
    //                 cnt++;
    //             }
    //         }
    //     }
    // }


    // Optimized O(n3)

    // for (int i=1; i<n-1; i++) {
    //     for (int j=i; j<n-1; j++) {
    //         for (int x=j; x<n-1; x++) {
    //             if ((i+j+x == n) && (i+j > x) && (i+x > j) && (j+x > i)) {
    //                 cout << i << " " << j << " " << x << endl;
    //                 cnt++;
    //             }
    //         }
    //     }
    // }


    // O(n2) 

    // for (int i=1; i<n-1; i++) {
    //     for (int j=1; j<n-1; j++) {
    //         int k = n - (i + j);
    //         if ((i+j+k == n) && (i+j > k) && (i+k > j) && (j+k > i) && (i>=j && j>=k)) {
    //             cout << i << " " << j << " " << k << endl;
    //             cnt++;
    //         }
    //     }
    // }
    if (n % 2 == 1) cnt++;

    for (int i=1; i<n/3; i++) { // 3
        cnt += (n+1) / 2 - (n-i+1) / 2; // 6 - 5
    }

    if (n % 3 == 0) cnt++;

    cout << cnt;
}

