#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int n, m, k, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i = n; i >= k; i--) cout << i << " ";
        for (int i = k - 1; i > m; i--) cout << i << " ";
        for (int i = 1; i <= m; i++) cout << i << " ";
        cout << "\n";
    }
}