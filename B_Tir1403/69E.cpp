#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

set<pair<int, int>> st;
map<int, int> cnt;
const int mxn = 1e5 + 10;
int a[mxn], n, k, l;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    rpt(n) cin >> a[i];
    rpt(k) {
        st.erase({cnt[a[i]], a[i]});
        cnt[a[i]]++;
        st.insert({cnt[a[i]], a[i]});
    }

    auto it = st.lower_bound({1, INT_MAX});
    if (it == st.begin()) cout << "Nothing";
    else {
        it--;
        cout << (*it).sd;
    }
    cout << endl;

    fori(1, n - k + 1) {
        st.erase({cnt[a[i - 1]], a[i - 1]});
        st.erase({cnt[a[i + k - 1]], a[i + k - 1]});
        cnt[a[i - 1]]--;
        cnt[a[i + k - 1]]++;
        if (cnt[a[i-1]]) st.insert({cnt[a[i - 1]], a[i - 1]});
        st.insert({cnt[a[i + k - 1]], a[i + k - 1]});
        auto it = st.lower_bound({1, INT_MAX});
        if (it == st.begin()) cout << "Nothing" << endl;
        else {
            it--;
            cout << (*it).sd << endl;
        }
    }
}