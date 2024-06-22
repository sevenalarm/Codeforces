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

    int xp, yp, xv, yv, manp, manv;
    bool vside;
    cin >> xp >> yp >> xv >> yv;
    manp = xp + yp, manv = xv + yv;
    vside = xv == 0 || yv == 0;
    if (manp > manv) cout << "Vasiliy";
    else if (manp == manv) {
        if (vside) cout << "Polycarp";
        else cout << "Vasiliy";
    }
    else if (max(xv, yv) >= manp) cout << "Polycarp";
    else {
        if (xv < xp || yv < yp) cout << "Vasiliy";
        else cout << "Polycarp";
    }
}