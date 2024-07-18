#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
int a[mxn], w[mxn], n;
ll ans;
map<int, multiset<int>> box;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    rpt(n) cin >> a[i];
    rpt(n) cin >> w[i];
    rpt(n) box[a[i]].insert(w[i]);
    // cout << "HI";
    fori(1, n+1) {
        if (box[i].size() > 1) {
            for (auto it = box[i].begin(); it != prev(box[i].end()); it++) 
                ans += *it; 
        }
    }
    cout << ans;
}