#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// sort swap ?
// takes the maximum each time, pushes to the end of the array.

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];

    int ind = 0;
    int mx = 0;
    int check = n;
    while (check > 1) {
        int ind = 0;
        int mx = 0;
        for (int i=0; i<check; i++){
            if (arr[i] > mx) {
                mx = arr[i];
                ind = i;
            }
        }
        arr[ind] = arr[check-1];
        arr[check-1] = mx;
        check--;
    }

    for (int i:arr) cout << i << " " ;
}