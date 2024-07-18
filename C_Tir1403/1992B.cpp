#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
int a[mxn], n, k, t;
int mx;
ll sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        mx = 0, sum = 0;
        cin >> n >> k;
        rpt(k) {
            cin >> a[i];
            sum += a[i];
            mx = max(a[i], mx);
        }

        cout << k - 1 + (sum - mx - (k - 1)) * 2 << "\n";

    }
}