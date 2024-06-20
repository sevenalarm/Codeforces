#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e3 + 10;
pair<int, int> a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, ans = 0;
    cin >> n;
    rpt(n+1) cin >> a[i].ft >> a[i].sd;
    fori(1, n) {
        if ((a[i-1].ft < a[i].ft && a[i].sd < a[i+1].sd) ||
            (a[i-1].ft > a[i].ft && a[i].sd > a[i+1].sd) ||
            (a[i-1].sd < a[i].sd && a[i].ft > a[i+1].ft) ||
            (a[i-1].sd > a[i].sd && a[i].ft < a[i+1].ft)) {
                ans++;
                // cout << i << " ";
        }
    }
    cout << ans;
}