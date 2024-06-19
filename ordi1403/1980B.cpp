#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 100 + 10;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k, f, fav;
    cin >> t;
    while (t--) {
        cin >> n >> f >> k;
        int a[n];
        rpt(n) cin >> a[i];
        fav = a[f-1];
        sort(a, a+n, greater<int>());
        if (k == n) cout << "YES";
        else if (a[k] < fav) cout << "YES";
        else if (a[k] == fav && (k == 0 || a[k-1] == fav)) cout << "MAYBE";
        else cout << "NO";
        cout << "\n";
    }
}