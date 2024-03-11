#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

const int mxn = 2e5;
int f[mxn];

ll fb(int n, int mx) {
    if (n == 0) f[n] = 1;

    else if (n == 1) f[n] = 2;

    else {
        if (f[n-1] > mx) return 0;
        f[n] = fb(n-1, mx) + fb(n-2, mx);
    }

    return f[n];
}

void fib(int n) {

    if (n == 0) return;

    int l = 0, r = n, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (f[mid] <= n) l = mid;
        else r = mid;
    }

    cout << l + 1 << " ";
    fib(n - f[l]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    fb(n, n);
    // rpt(n) {
    //     cout << f[i] << " ";
    // }
    cout << endl;
    fib(n);
}