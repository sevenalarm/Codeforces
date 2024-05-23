#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 100;
int a[mxn], b[mxn];
int n, k, x, mn;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    rpt(n) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    if (a[n-1] - a[0] > k) cout << "NO";
    else {
        cout << "YES" << endl;
        rpt(n) {
            range(0, a[0]) cout << 1 << " ";
            x = 1;
            range(0, b[i] - a[0]) {
                cout << x << " ";
                x++;
            }
            cout << endl;
        }
    }

}