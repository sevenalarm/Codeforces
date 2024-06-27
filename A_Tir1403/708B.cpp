#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll a1, a2, a3, a4, cnt0, cnt1, n1, n4;

void solve(ll cnt0, ll cnt1, ll i) {
    if (cnt0 == 0) range(0, cnt1) cout << 1;
    else if (cnt1 == 0) range(0, cnt0) cout << 0;
    else if (i <= cnt0) {
        cout << 0;
        solve(cnt0 - 1, cnt1, i);
    } else {
        cout << 1;
        solve(cnt0, cnt1 - 1, i - cnt0);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a1 >> a2 >> a3 >> a4;
    cnt0 = (1 + sqrt(1 + 8 * a1)) / 2;
    cnt1 = (1 + sqrt(1 + 8 * a4)) / 2;
    if (((cnt0 - 1) * cnt0) / 2 == a1 && 
        ((cnt1 - 1) * cnt1) / 2 == a4) {
        if (a2 + a3 == cnt0 * cnt1) solve(cnt0, cnt1, a3 + 1);
        else if (!(a2 || a3) && (a1 || a4) && !(a1 && a4)) solve(cnt0 * (bool)a1, cnt1 * (bool)a4, 1);
        else if (!(a1 || a2 || a3 || a4)) cout << '0';
        else cout << "Impossible";
    } else cout << "Impossible";
}