#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[n];
    int sad = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        cout << sad << " ";
        if (x == 0) sad++;

    }
}

// seems OK