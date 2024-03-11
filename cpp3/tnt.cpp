#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int a[n];
        long long ps[n], sum = 0, mx = 0;
        for (int i = 0; i<n ; i ++) {
            cin >> a[i];
            sum += a[i];
            ps[i] = sum;
        }

        vector<int> divs;
        int i = 1;
        while (i < n) {
            if (n % i == 0) {
                divs.push_back(i);
            }
            i++;
        }

        for (int i=0; i<divs.size(); i++) {
            int div = divs[i];
            long long pmx = ps[div-1], pmin = ps[div-1];

            for (int j = div * 2 - 1; j < n; j += div ) {
                if (ps[j] - ps[j - div] > pmx) pmx = ps[j] - ps[j - div];
                else if (ps[j] - ps[j - div] < pmin) pmin = ps[j] - ps[j - div];
            }

            if (pmx - pmin > mx) mx = pmx - pmin; 
        }
        
        cout << mx << endl;
    }
}