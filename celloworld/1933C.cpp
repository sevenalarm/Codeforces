#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (ll i=0; i<(a); i++)
#define range(a, b) for (ll j=(a); j<(b); j++)
#define ft first
#define sd second

ll t, l, a, b;
ll p, p2, ans, mul;
ll alg, blg;
set <ll> st;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

ll lg(ll x, ll y) {
    ll res = 0;
    while (x && x % y == 0) {
        res++;
        x /= y;
    }
    return res;
}

int main() {
    cin >> t;
    while (t--) {
        st.clear();
        ans = 0;
        cin >> a >> b >> l;
        alg = lg(l, a);
        blg = lg(l, b);
        rpt(alg + 1) {
            p = binpow(a, i);
            range(0, blg + 1) {
                p2 = binpow(b, j);
                if ((p * p2) <= l) {
                    if ((l % (p*p2)) == 0) {
                        mul = l / (p*p2);
                        st.insert(mul);
                    }

                } else break;
            }
        }
        if (!st.empty()) ans = st.size();
        cout << ans << "\n";
    }
}