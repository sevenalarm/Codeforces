#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

const int mxn = 100;
string a[mxn];

void begoo(int n, int mx) {
    if (n < mx) begoo(n + 1, mx);
    cout << a[n] << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    rpt(n) cin >> a[i];
    begoo(0, n - 1);
}