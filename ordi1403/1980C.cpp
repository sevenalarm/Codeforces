#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
int a[mxn], b[mxn], d[mxn];
map<int, int> am, bm, dm, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, m;
    cin >> t;
    while (t--) {
        am.clear();
        bm.clear();
        dm.clear();
        x.clear();
        cin >> n;
        rpt(n) {
            cin >> a[i];
            am[a[i]]++;
        }
        rpt(n) {
            cin >> b[i];
            bm[b[i]]++;
        }
        cin >> m;
        rpt(m) {
            cin >> d[i];
            dm[d[i]]++;
        }

        bool poss = true;
        rpt(n) {
            if (a[i] != b[i]) x[b[i]]++;
        }
        rpt(n) if (x[b[i]] > dm[b[i]]) poss = false;

        if (poss) {
            bool mariz = false;
            rpt(m) {
                if (!bm[d[i]]) mariz = true;
                else mariz = false;
            }
            if (mariz) cout << "NO";
            else cout << "YES";
            cout << "\n";
        } else cout << "NO" << "\n";
    }
}