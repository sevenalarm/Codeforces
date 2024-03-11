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

    ll n, mx = 0;
    ll sum = 0;
    cin >> n;
    ll a[n];
    rpt(n) {
        cin >> a[i];
        if (a[i] > mx) mx = a[i];
        sum += a[i];
    }

    ll l = mx - 1, r = sum, mid, thing; 
    while (r - l > 1) { 
        mid = (l + r) / 2;
        thing = mid * (n-1);
        if (mid >= mx && thing >= sum) {
            r = mid;
        } else l = mid;
    }
    cout << r;
}
