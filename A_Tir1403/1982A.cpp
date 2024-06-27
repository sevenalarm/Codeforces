#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, a1, a2, b1, b2;
    cin >> t;
    while (t--) {
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        if ((a1 > a2 && b1 < b2) || (a1 < a2 && b1 > b2)) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}