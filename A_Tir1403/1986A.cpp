#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int x, y, z, a, mnd, d, t, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        mnd = abs(x - y) + abs(x - z);
        ans = x;
        fori(min(min(x, y), z), max(max(x, y), z) + 1) {
            d = abs(i - x) + abs(i - y) + abs(i - z);
            if (d < mnd) {
                mnd = d;
                ans = i;
            }
        }
        cout << mnd << "\n";
    }
}