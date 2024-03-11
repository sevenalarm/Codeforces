#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, foo;
    int q, a, b, x, y, most=0;
    scanf("%i %i", &n, &m);
    int arr[n][m];
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=0; j<m; j++) {
            scanf("%i", &foo);
            sum += foo;
            arr[i][j] = sum;
        }
    }   

    cin >> q;
    int ans[q];
    for (int k = 0; k < q; k++) {
        // cin >> a >> b >> x >> y;
        scanf("%i %i %i %i", &a, &b, &x, &y);
        most = 0;
        for (int i=a-1; i<=x-1; i++) {
            if (b>1) most += arr[i][y-1] - arr[i][b-2];
            else most += arr[i][y-1];
        }
        ans[k] = most;
    }

    for (int i:ans) cout << i << endl;
}