#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
ll c[mxn], l, r, mid, sum, mn, n, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    mn = 2e9;
    rpt(n) {
        cin >> c[i];
        mn = min(mn, c[i]);
    }  
    l = 0, r = t * mn;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        sum = 0;
        rpt(n) sum += mid / (ll)c[i];
        if (sum < t) l = mid;
        else r = mid;
    }
    cout << r;
}