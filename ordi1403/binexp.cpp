#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

ll ans;
int mod = 1e9 + 7;

int bin_pow(ll n, ll m) {
    if (m == 0) return 1;
    if (m == 1) return n % mod;
    ans = bin_pow(n, m/2);
    return (((ans * ans) % mod) * (n * (m % 2))) % mod;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    cout << bin_pow(n, m);
}