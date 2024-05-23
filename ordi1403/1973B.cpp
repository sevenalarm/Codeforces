#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int mxn = 1e5 + 10;
ll por[mxn][21], a[mxn];
ll t, n, k, l, r, mid;

void foo(ll x, ll ind) {
    if (ind != 0) {
        range(1, 21) por[ind][j] = por[ind-1][j];
    }
    int i = 1;
    while(x) {
        por[ind][i] += x % 2;
        x/=2;
        i++;
    }
    // range(1, 21) cout << por[ind][j] << " ";
    // cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n+1) {
            range(0, 21) por[i][j] = 0;
        }
        rpt(n) cin >> a[i];
        rpt(n) foo(a[i], i+1);

        l = 0, r = n;
        bool poss = true;
        while (l + 1 < r) {
            mid = (l+r) / 2; // 4
            ll rast = mid; // 3
            poss = true;
            while (rast <= n) {
                for (int i = 1; i <= 20; i++) {
                    if (not((por[rast][i] - por[rast - mid][i] != 0 && por[mid][i] != 0) || 
                        (por[rast][i] - por[rast - mid][i] == 0 && por[mid][i] == 0))) {
                        poss = false;
                        break;
                    }
                }
                if (!poss) break;
                rast++;
            }
            if (poss) r = mid;
            else l = mid;
        }
        cout << r << "\n";
    }
}