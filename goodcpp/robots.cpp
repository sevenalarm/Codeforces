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

    int n, k;
    cin >> n >> k;
    int a[n];
    rpt(n) cin >> a[i];
    ll l = 0, r = n + 2, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * (mid - 1) / 2 < k) l = mid;
        else r = mid;
    }

    k -= l * (l - 1) / 2;
    cout << a[k-1];
}

