#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        pair<int, int> a[n], b[n], c[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a, a+n);
        sort(b, b+n);
        sort(c, c+n);

        pair<int, int> amx[3], bmx[3], cmx[3];
        for (int i = 0; i < 3; i++) {
            amx[i] = a[n - i - 1];
            bmx[i] = b[n - i - 1];
            cmx[i] = c[n - i - 1];
        }

        ll mx = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                if (amx[i].second != bmx[j].second) {
                    for (int k = 0; k < 3; k++) {

                        if (amx[i].second != cmx[k].second && bmx[j].second != cmx[k].second) {
                            ll sum = amx[i].first + bmx[j].first + cmx[k].first;
                            if (sum > mx) mx = sum;
                        }
                    }
                }
            }
        }

        cout << mx << endl;
    }
}