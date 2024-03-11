#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    string a[n], b[m];
    rpt(n) cin >> a[i];
    rpt(m) cin >> b[i];
    if (n > m) cout << "YES";
    else if (n < m) cout << "NO";
    else {
        ll cnt = 0;
        rpt(n) {
            range(0, n) {
                if (a[i] == b[j]) cnt ++;
            }
        }
        if (cnt % 2 == 1) cout << "YES";
        else cout << "NO";
    }
} 