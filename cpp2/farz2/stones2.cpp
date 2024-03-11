#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, l, r;
    cin >> n;
    long long a[n], ps[n], ps_srt[n];
    long long mxn = 0, sum = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] > mxn) mxn = a[i];
        sum += a[i];
        ps[i] = sum;
    }

    // a = [6 4 2 7 2 7]
    // n = 6

    cout << mxn << endl; // 7
    int sz = mxn/2; // 3
    cout << sz;
    int cnt1[sz]; // 3
    int cnt2[sz+1]; // 4
    
    for (int i=0; i<sz; i++) cnt1[i] = 0; // [0, 0, 0]
    for (int i=0; i<sz+1; i++) cnt2[i] = 0; // [0, 0, 0, 0]
    
    for (int i=0; i<n; i++) {
        if (a[i] <= sz) cnt1[a[i]-1] ++;
        else cnt2[a[i] - sz - 1] ++;

    };



    sum = 0;
    int ind = 0;
    for (int i=0; i<sz; i++) {
        if (cnt1[i] > 0) {
            for (int j=ind; j < ind+cnt1[i]; j++) {
                sum += i + 1;
                ps_srt[j] = sum;
                // cout << sum << " ";
            }
            ind += cnt1[i];
        }
    }

    for (int i=sz; i<sz*2 + 1; i++) {
        if (cnt2[i - sz] > 0) {
            for (int j=ind; j < ind+cnt2[i - sz]; j++) {
                sum += i + 1;
                ps_srt[j] = sum;
                // cout << sum << " ";
            }
            ind += cnt2[i - sz];
        }
    }
    // cout << endl;

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