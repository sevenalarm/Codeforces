#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

// ACCEPTED

const int mxn = 1e4 + 10;
int a[mxn][2], ans[mxn];
int n, k;

int gb(int n, int i) {
    return (n / (1 << i)) % 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;

    rpt(n-1) {
        cout << "or " << i+1 << ' ' << i+2 << endl;
        cin >> a[i][0];
        cout << "and " << i+1 << ' ' << i+2 << endl;
        cin >> a[i][1];
    }
    cout << "or " << 1 << ' ' << 3 << endl;
    cin >> a[n-1][0];
    cout << "and " << 1 << ' ' << 3 << endl;
    cin >> a[n-1][1];

    rpt(32) {
        if (!gb(a[0][1], i) && !gb(a[1][1], i) && !gb(a[n-1][1], i)) { // or ro and konim
            ans[0] += (gb(a[0][0], i) & gb(a[n-1][0], i)) << i;
            ans[1] += (gb(a[1][0], i) & gb(a[0][0], i)) << i;
            ans[2] += (gb(a[n-1][0], i) & gb(a[1][0], i)) << i;

        } else { // and ro or konim
            ans[0] += (gb(a[0][1], i) | gb(a[n-1][1], i)) << i;
            ans[1] += (gb(a[1][1], i) | gb(a[0][1], i)) << i;
            ans[2] += (gb(a[n-1][1], i) | gb(a[1][1], i)) << i;
        }

        range(2, n-1) {
            if (ans[j] & (1 << i)) 
                ans[j+1] += a[j][1] & (1 << i);
            else
                ans[j+1] += a[j][0] & (1 << i);
        }
    }

    sort(ans, ans + n);
    cout << "finish " << ans[k-1] << endl;
}