#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

map<int, set<int>> mp;
const int mxn = 2e5 + 10;
int a[mxn];
int t, n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        rpt(n) {
            mp[a[i]/4].insert(a[i]);
            a[i] = a[i]/4;
        }
        for (int i = n-1; i >= 0; i--) {
            a[i] = *mp[a[i]].rbegin();
            mp[a[i]/4].erase(prev(mp[a[i]/4].end()));
        }
        rpt(n) cout << a[i] << " ";
        cout << "\n";
    }
}