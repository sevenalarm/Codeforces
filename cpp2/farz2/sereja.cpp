#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, mxn = 1e5, x;
    cin >> n >> m;
    int a[n], cnt[mxn+1], c[n];

    for (int i=0; i<=mxn; i++) cnt[i] = 0;

    for (int i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]] ++;
    }  

    // for (int i=0; i<n; i++){
    //     cout << cnt[a[i]] << " ";
    // }
    // cout << endl;

    for (int i=n-1; i>=0; i--) {
        if (i==n-1) {
            c[i] = 1;
            if (cnt[a[i]] > 1) cnt[a[i]] = -1;
        } 
        else {
            if (cnt[a[i]] == 1) c[i] = c[i+1] + 1;
            else {
                if (cnt[a[i]] > 1){
                    c[i] = c[i+1] + 1;
                    cnt[a[i]] = -1;
                } else c[i] = c[i+1];
            }
        }
    }
    
    // for (int i:c) cout << i << " ";
    // cout << endl;

    for (int i=0; i<m; i++) {
        cin >> x;
        cout << c[x-1] << endl;
    }
}