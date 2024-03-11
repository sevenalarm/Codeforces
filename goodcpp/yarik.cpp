#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], ps[n];
        rpt(n) {
            cin >> a[i];
            if (i > 0) ps[i] = ps[i-1] + a[i];
            else ps[0] = a[i];
        }
        int mn = min(0, a[0]), mx = a[0]; 
        range(1, n) {
            if (abs(a[i]) % 2 == abs(a[i-1]) % 2) mn = ps[i-1];
            if (ps[i] - mn > mx) {
                mx = ps[i] - mn;
            }
            if (ps[i] < mn) mn = ps[i];
        }

        cout << mx << endl;
        

    }
}