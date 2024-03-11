#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int a[mxn], mx = 0;
ll sum = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        mx = 0, sum = 0;
        cin >> n; 
        rpt(n) {
            cin >> a[i];
            sum += a[i];
            if (a[i] > mx) mx = a[i];
        }
        if (mx == 0) cout << 0;
        else if (2 * mx - 1 <= sum) cout << 1;
        else cout << 2 * mx - sum;
        cout << "\n";
    }
}