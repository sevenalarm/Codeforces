#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    multiset<int> st;

    int t, n, pt;
    ll ans;
    cin >> t;
    while (t--) {
        cin >> n;
        st.clear();
        st.insert(0); // 0
        auto tah = st.begin();
        ans = 0;

        rpt(n) {
            cin >> a[i];
            if (a[i] > 0) {
                st.insert(a[i]); // 0 1 2 3 4 

            } else {
                tah = st.end();
                tah--;
                if (*tah != 0) {
                    ans += *tah; // 5
                    st.erase(tah);
                }
            }
        }

        cout << ans << endl;
    }
}