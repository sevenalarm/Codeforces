#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        int sz = s.size();
        int lz[sz+1], lo[sz+1];
        int zc = 0, oc = 0;

        lz[0] = 0;
        lo[0] = 0;
        for (int i=1; i<=sz; i++) {
            if (s[i-1] == '0') zc++;
            else oc++;
            lz[i] = oc;
            lo[i] = zc;
        }

        zc = 0, oc = 0;
        for (int i=sz-1; i>=0; i--) {
            if (s[i] == '0') zc++;
            else oc++;
            lz[i] += zc;
            lo[i] += oc;
        }

        // for (int i:lz) cout << i << " ";
        // cout << endl;
        // for (int i:lo) cout << i << " ";

        int mn = sz;
        for (int i:lz) if (i < mn) mn = i;
        for (int i:lo) if (i < mn) mn = i;

        cout << mn << endl;

        
    }
}