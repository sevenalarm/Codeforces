#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, mx=0, mx2=0;
    cin >> t;
    while(t--){
        mx=0;
        mx2=0;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr[i];
            if (arr[i] > mx) {
                mx2 = mx;
                mx = arr[i];
            } else if (arr[i] > mx2) mx2 = arr[i];
        }

        for (int i=0; i<n; i++){
            if (arr[i] < mx) cout << arr[i] - mx << " ";
            else cout << mx - mx2 << " ";
        }
        cout << endl;

    }
}