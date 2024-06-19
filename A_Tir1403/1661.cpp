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
map<ll, int> mp;
ll a[mxn], ps[mxn], ans;
int n, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    mp[0] = 1;
    rpt(n) {
        cin >> a[i];
        if (i == 0) ps[i] = a[i];
        else ps[i] = ps[i-1] + a[i];
        ans += mp[ps[i] - x];
        mp[ps[i]]++;
    }
    cout << ans;
}