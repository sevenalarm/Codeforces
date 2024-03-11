#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/913/problem/D

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;
    pair<int, pair<int, int>> a[n];
    set<pair<int, int>> st;

    rpt(n) {
        cin >> a[i].ft >> a[i].sd.ft;
        a[i].sd.sd = i;
    }

    sort(a, a+n);
    ll sum = 0;
    int pt = 0, apt = n-1, ans = 0;
    for (int i = n; i >= 0; i--) { // 3
        while(apt >= 0 && a[apt].ft == i) {
            st.insert(a[apt].sd); // 150, 80, 
            sum += a[apt].sd.ft; // 230
            apt--;
            pt++; // 2
        } 

        while (pt > i) {
            auto it = prev(st.end());
            sum -= (*it).ft;
            st.erase(it);
            pt--;
        }

        if (pt == i && sum <= t) {
            ans = i;
            break;
        } 
    }

    cout << ans << endl << ans << endl;
    auto it = st.begin();
    while (it != st.end()) {
        cout << (*it).sd + 1 << " ";
        it++;
    }
    
}