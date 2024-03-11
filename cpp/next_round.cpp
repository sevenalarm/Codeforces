#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, kth=0, c=0;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (i==k-1) kth = arr[i];
    }
    for (int i=0; i<n; i++){
        if (arr[i] >= kth && arr[i] > 0) c++;
    }
    cout << c;



}