#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int x, y, k, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        while (k) {
            x++;
            k--;
            while (x % y == 0) x /= y;
            if (x == 1 || k < (y - (x % y))) break;
            k -= (y - (x % y)) - 1; 
            x += (y - (x % y)) - 1;
        }
        if (x != 1) cout << x + k << "\n";
        else cout << x + (k % (y - 1)) << "\n";
    }
}