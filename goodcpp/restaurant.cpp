#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/597/problem/B

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define mkp(x, y) make_pair(x, y)

const int mxn = 5e5 + 10;
pair<int, int> a[mxn];
int n, l, r, pt, mx;
map<int, int> dp;
set<int> st;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    rpt(n) {
        cin >> l >> r;
        a[i] = mkp(r, l);
        st.insert(r);
    }
    sort(a, a+n);
    pt = 0, mx = 0;
    st.insert(0);
    auto cur = st.begin();
    cur++;
    dp[0] = 0; 
    while (pt < n) {
        while(pt < n && a[pt].ft == *cur) {
            auto it = st.lower_bound(a[pt].sd - 1);
            if (*it != a[pt].sd - 1) it--;
            if (dp[*it] + 1 > mx) mx = dp[*it] + 1;
            pt++;
        }
        dp[*cur] = mx;
        cur++;
    }
    cout << mx;
}