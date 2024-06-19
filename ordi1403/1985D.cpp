#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5;
map <int, int> a;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, m, mx, r, c, cnt;
    char s;
    cin >> t;
    while (t--) {
        a.clear();
        mx = 0;
        r = 0, c = 0;
        cin >> n >> m;
        rpt(n) {
            cnt = 0;
            range(0, m) {
                cin >> s;
                if (s == '#') {
                    cnt++;
                    if (a[i] == 0) a[i] = j + 1;
                }
            }
            if (cnt > mx) {
                mx = cnt;
                r = i + 1;
            }
        }
        c = a[r-1] + (mx/2);
        cout << r << " " << c << "\n";
    }
}