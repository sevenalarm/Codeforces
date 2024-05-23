#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

int t, a, b, c, x1, x2, x3;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> a >>b >> c;
        if ((a + b + c) % 2 != 0 ) cout << -1;
        else {
            if (c > a + b) cout << a + b;
            else cout << (a+b+c) / 2;
        }
        cout << "\n";
    }
}