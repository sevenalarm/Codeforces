#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int a[21];
ll fact[21];
set <int> st;
int n;

ll num(int l) {
    if (l == n-1) return 1;
    else {
        auto it = st.begin();
        int ja = 0;
        while(*it != a[l]) {
            it++;
            ja++;
        }
        st.erase(it);
        return (ja * fact[n - l - 1]) + num(l + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fact[0] = 1ll;
    fact[1] = 1ll;
    range(2, 21) {
        fact[j] = fact[j-1] * j;
    }

    cin >> n;
    rpt(n) {
        cin >> a[i];
        st.insert(i+1);
    }

    cout << num(0);
}