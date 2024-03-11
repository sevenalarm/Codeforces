#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, rang;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        rpt(n) cin >> a[i];
        if (a[0] == a[n-1] ) rang = a[0];
        else if (n > 1) {
            int l = 0, r = 0;
            rpt(n) {
                if (a[i] == a[0]) l++;
                else break;
            }

            for (int i = n-1; i >= 0; i--) {
                if (a[i] == a[n-1]) r++;
                else break;
            }

            if (l > r) rang = a[0];
            else rang = a[n-1];
        }
        // cout << rang << endl;
        int l = -1, r = -1;
        rpt(n) {
            if (a[i] != rang) {
                l = i;
                break;
            }
        }

        for (int i = n-1; i >= 0; i--) {
            if (a[i] != rang) {
                r = i;
                break;
            }
        }
        if (l == r && r == -1) cout << 0 << endl;
        else cout << r - l + 1 << endl; 
    }
}