#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, l, r;
    cin >> n;
    long long a[n], ps[n], ps_srt[n];
    long long sum = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        ps_srt[i] = a[i];
        sum += a[i];
        ps[i] = sum;
    }

    int sz = sizeof(ps_srt) / sizeof(ps_srt[0]);
    sort(ps_srt, ps_srt+sz);

    sum = 0;
    for (int i=0; i<n; i++) {
        sum += ps_srt[i];
        ps_srt[i] = sum;
    }


    int m; 
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> q >> l >> r;
        if (q==1) {
            if (l == 1) cout << ps[r-1];
            else cout << ps[r-1] - ps[l-2];
        } else {
            if (l == 1) cout << ps_srt[r-1];
            else cout << ps_srt[r-1] - ps_srt[l-2];
        }

        cout << endl;
    }

}

// ACCEPTED