#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 100;
int ships[mxn];
int n, k, a, m;

int cntship(int l, int r) {
    int len = r - l - 1;
    if (len < a) return 0;
    else return (len + 1) / (a + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> a;

    set <int> shots;
    shots.insert(0);
    shots.insert(n+1);
    int ships = cntship(0, n+1);
    int ans;

    cin >> m;
    int x;
    rpt(m) {
        cin >> x;
        auto r = shots.upper_bound(x);
        auto l = r;
        l--;

        ships -= cntship(*l, *r);
        ships += cntship(*l, x);
        ships += cntship(x, *r);
        shots.insert(x);

        if (ships < k) {
            ans = i + 1;
            break;
        }
        if (i == m - 1) ans = -1;
    }

    cout << ans;


}