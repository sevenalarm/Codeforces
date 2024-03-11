#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
int a[mxn];
int t, n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        sort(a, a+n);
        bool poss = false;        
        if (a[0] == a[1]) {
            rpt(n) {
                if (a[i] % a[0] != 0) {
                    poss = true;
                }
            }
            if (!poss) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        } else cout << "YES" << "\n";
    }
}