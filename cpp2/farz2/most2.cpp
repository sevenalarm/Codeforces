#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long arr[n][m], foo;

    for (int i=0; i<n; i++) {
        long long sum = 0;
        for (int j=0; j<m; j++) {
            cin >> foo;
            sum += foo;
            arr[i][j] = sum;
        }
    }

    for (int i=1; i<n; i++) {
        for (int j=0; j<m; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j];
        }
    }


    int q, a, b, x, y, most=0;
    cin >> q;
    long long ans[q];

    for (int k = 0; k < q; k++) {

        cin >> a >> b >> x >> y;
        a -= 1; // 2
        b -= 1; // 0
        x -= 1; // 3
        y -= 1; // 2
        
        if (a == 0 && b != 0) most = arr[x][y] - arr[x][b-1];
        else if (b == 0 && a != 0) most = arr[x][y] - arr[a-1][y];
        else if (a == b && a == 0) most = arr[x][y];
        else most = arr[x][y] - arr[x][b-1] - arr[a-1][y] + arr[a-1][b-1];
        
        ans[k] = most;

    }

    for (long long i:ans) cout << i << endl;
}