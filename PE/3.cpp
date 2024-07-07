#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)


const ll mxn = 1e6;
ll mark[mxn];

void gharbal() {
    mark[1] = 1;
    fori(2, mxn) {
        if (!mark[i]) {
            for (int j = 2 * i; j < mxn; j += i) mark[j] = 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x = 600851475143, ans;
    gharbal();
    int sq = sqrt(x);
    cout << sq << " ";
    for (int i = sq; i >= 2; i--) {
        if (x % i == 0 && !mark[i]) {
            ans = i;
            break;
        }
    }

    cout << ans;
}