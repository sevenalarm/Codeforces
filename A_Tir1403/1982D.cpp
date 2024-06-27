#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

map <pair<int, int>, bool> mp;
const int mxn = 500 + 10;
int t, k, n, m, a[mxn][mxn], s[mxn][mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        mp.clear();
        cin >> n >> m >> k;
        rpt(n) range(0, m) cin >> a[i][j];
        rpt(n) range(0, m) cin >> s[i][j];
        
    }
}