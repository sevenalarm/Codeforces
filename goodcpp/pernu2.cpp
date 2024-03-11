#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

ll fact[21];
set <ll> st;
ll n, ja, i;

void jyg(ll k, ll len) { // 2, 3
    if (len == 1) {
        cout << *st.begin();
        return;
    }
    i = 1ll;
    while (k > i * fact[len-1]) i++;
    k -= (i-1) * fact[len-1];
    auto it = st.begin();
    i--;
    while (i--) it++;
    cout << *it << " ";
    st.erase(it);
    jyg(k, len-1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fact[0] = 1ll;
    fact[1] = 1ll;
    for (ll i = 2; i <= 20; i++) {
        fact[i] = fact[i-1] * i;
    }

    ll shom;
    cin >> n >> shom;
    for(ll i = 1; i <= n; i++) st.insert(i);
    jyg(shom, n);
}