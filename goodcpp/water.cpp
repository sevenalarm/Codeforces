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

    int t, n, har;
    ll sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        int a[n];
        rpt(n) {
            cin >> a[i];
            sum += a[i];
        }

        har = sum / n;
        bool ok = true;
        rpt(n-1) {
            if (a[i] < har) ok = false;
            else {
                a[i+1] += a[i] - har;
                a[i] = har;
            }
        }

        if (ok) cout << "YES";
        else cout << "NO";
        cout << endl;

    }
}