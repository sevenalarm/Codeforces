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
        int a[n];
        int pxor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pxor ^= a[i];
        }

        int x;
        for (int i = 0; i < n; i++) {
            if (a[i] == pxor ^ a[i]) x = a[i];
        }

        cout << x << endl;
    }
}