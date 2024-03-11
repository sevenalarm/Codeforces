#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// bubble sort

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];

    int ind = 0;
    int mosht = 0;
    int check = n-1;
    while (check > 1) {
        for (int i=0; i<check-1; i++){
            if (arr[i] > arr[i+1]) {
                mosht = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = mosht;
            }
        }
        check--;
    }

    for (int i:arr) cout << i << " " ;
}