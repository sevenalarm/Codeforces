#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int a[mxn], l[mxn], r[mxn], mark[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k, pt;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        rpt(k+1) mark[i] = 0;
        rpt(n) {
            cin >> a[i];
            mark[a[i]] = 1;
        }

        pt = 1;
        rpt(n) {
            if (a[i] >= pt) {
                range(pt, a[i]+1) {
                    l[j] = i;
                }
                pt = a[i] + 1;
            }
        }

        pt = 1;
        for (int i = n-1; i >= 0; i--) {
            if (a[i] >= pt) {
                range(pt, a[i] + 1) {
                    r[j] = i+1;
                }

                pt = a[i] + 1;
            }
        }

        range(1, k+1) {
            if (!mark[j]) cout << 0 << " ";
            else cout << (r[j] - l[j]) * 2 << " ";
        }

        cout << endl;
    }
}