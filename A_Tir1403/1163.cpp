#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)
#define lb lower_bound

set<int> st;
multiset<int> sz;
const int mxn = 2e5 + 10;
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, p, s;
    cin >> x >> n;
    st.insert(0);
    st.insert(x);
    sz.insert(x);
    rpt(n) {
        cin >> p;
        auto it = st.lb(p);
        sz.erase(sz.lb(*it - *prev(it)));
        sz.insert(*it - p);
        sz.insert(p - *prev(it));
        st.insert(p);
        a[i] = *sz.rbegin();
    }
    rpt(n) cout << a[i] << " ";
}