#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
int cost[30];
int anses[30][30];
vector<int> good;
ll slvi(int l, int r, int i);

ll slv(int l, int r);

ll slvi(int l, int r, int i) {
    return max(slv(l, i) + cost[i], slv(i+1, r) + cost[i] + 5);
}

ll slv(int l, int r) {
    if (anses[l][r] != 0) return anses[l][r];
    if (l + 1 == r) {
        anses[l][r] = cost[l] + 5;
        return cost[l] + 5;

    } else if (l == r) return 0;

    ll ans = 1e18;
    int goodi = l;
    range(l, r) {
        ll newan = slvi(l, r, i);
        if (slvi(l, r, i) < ans) {
            ans = newan;
            goodi = i;
        }
        
    }

    anses[l][r] = ans;
    good.push_back(goodi);
    cout << ans << endl;
    return ans;
}   



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    rpt(10) cost[i] = 1;
    range(10, 20) cost[i] = 2;
    range(20, 30) cost[i] = 3;

    ll res = slv(0, 29);
    cout << res << endl;
    for (auto i:good) cout << i << " ";
}