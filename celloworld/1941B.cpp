#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
int a[mxn], n, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        bool poss = true;
        rpt(n-2) {
            if (a[i] < 0) poss = false;
            else {
                a[i+1] -= a[i] * 2;
                a[i+2] -= a[i];
                a[i] = 0;
            }
        }
        if (a[n-2] != 0 || a[n-1] != 0) poss = false;
        if (poss) cout << "YES\n";
        else cout << "NO\n";
    }
}