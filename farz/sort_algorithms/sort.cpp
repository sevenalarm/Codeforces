#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// sort ro hava

int main() {
    int n, i=0, x;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> x;
        if (i==0) {
            arr[0] = x;

        } else {

            if (arr[i-1] <= x) {
                arr[i] = x;

            } else {
                int j = i-1;

                while (arr[j] > x) {
                    arr[j+1] = arr[j];
                    arr[j] = x;
                    j--;
                }

            }
        }
    }

    for (int v:arr) cout << v << " ";
}

//seems OK
//insertion sort.. I guess?