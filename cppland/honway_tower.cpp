#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

void solve(int n, int d1, int d2) {
    if (n==1) {
        cout << d1 << " " << d2 << endl;
        return;
    }
    solve(n-1, d1, (6 - d1 - d2));
    cout << d1 << " " << d2 << endl;
    solve(n-1, (6 - d1 - d2), d2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    // rpt(n) {
    //     if (i == 0) ans = 1;
    //     else ans = ans * 2 + 1;
    // }
    ll ans = 1 << n;
    ans -= 1;
    cout << ans << endl;
    solve(n, 1, 3);
}

