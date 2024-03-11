#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 500;
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    multiset< int > st;

    int n, x;
    cin >> n;
    rpt(n * n) {
        cin >> x;
        st.insert(x);
    }

    rpt(n) {
        auto it = st.rbegin();
        x = *it;
        a[i] = x;
        auto it1 = st.lower_bound(x);
        st.erase(it1);

        for (int j = 0; j < i; j++) {
            int g = __gcd(x, a[j]);

            auto it2 = st.lower_bound(g);
            st.erase(it2);
            it2 = st.lower_bound(g);
            st.erase(it2);
        } 
    }

    rpt(n) cout << a[i] << " ";
}