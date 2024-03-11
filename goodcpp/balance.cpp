#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e8;
int mark[mxn];



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> x >> n;
        for (int i = x / n; i >= 1; i--) {
            if (x % i == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}