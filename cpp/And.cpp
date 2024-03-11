#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// issue: only checks the golden number for the max value


// check if there is no operation needed
bool already(auto a){
    for (int i=0; i<sizeof(a); i++){
        for (int j=0; j<sizeof(a); j++){
            if (i!=j && a[i]==a[j]) return true;
        }
    }
    return false;
}



// the main algorithm
int func(auto a, int x, int n){
    int mx = a[0], mx_index = 0;
    for (int i=1; i<n; i++){
        if (a[i] > mx){
            mx = a[i];
            mx_index = i;
        }
    }
    
    int gold = mx&x;

    for (int i=0; i<n; i++){
        if (i != mx_index && a[i] == gold) return 1;
        else if (a[i] > gold) {
            int hope = a[i]&x;
            if (hope == gold) return 2;
        }
    }
    return -1;
}


int main() {
    int n, x;
    cin >> n >> x;
    //array
    int arr[n];
    int num, count = 0;
    while (cin >> num) {
        arr[count] = num;
        count++;
        if (count >= n) break;
    }

    if (already(arr)) cout << 0;
    else cout << func(arr, x, n);
}