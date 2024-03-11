#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, z, a1 = 0, a2 = 0, a3 = 0;
    rpt(7) {
        cin >> x >> y >> z;
        a1 ^= x;
        a2 ^= y;
        a3 ^= z;
    }
    cout << a1 << " " << a2 << " " << a3;
}