#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int a[mxn];
int t, n, ans;
ll sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        sum = 0, ans = 2;
        cin >> n;
        rpt(n) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 3 == 1) ans = 1;
        }

        if (sum % 3 == 0) ans = 0;
        else if (sum % 3 == 2) ans = 1;
        cout << ans << "\n";
    }
}