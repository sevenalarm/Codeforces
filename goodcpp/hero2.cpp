#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

multiset <int> st;
ll ans = 0;
const int mxn = 5e3 + 10;
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, x;
    cin >> t;
    while (t--) {
        st.clear();
        cin >> n;
        ans = 0;
        rpt(n) {
            cin >> x;
            if (x != 0) st.insert(x);
            else if (!(st.empty())) {
                auto it = prev(st.end());
                ans += *it;
                st.erase(it);
            }
        }
        cout << ans << "\n";
    }

}