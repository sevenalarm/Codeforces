#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;


    // int grid[n][n];

    // for (int i=1; i<=n; i++) {
    //     for (int x=0; x<n-i; x++) {
    //         cout << " ";
    //     }
    //     for (int j=0; j<i; j++){
    //         if (j==0 || j+1==i) grid[i][j] = 1;
    //         else grid[i][j] = grid[i-1][j] + grid[i-1][j-1];
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arr[n+1];
    for (int i=0; i<n; i++) arr[i] = 0;
    arr[0] = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (j == 0) {
                cout << 1;
            } else {
                cout << arr[j] + arr[j-1];
            }
        }
    }




    

}