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
int n, t, x;
pair<int, int> a[mxn];
string bin;
set<pair<int, int>> neg0, neg1;
ll ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> t;
    cin >> bin;
    rpt(n) {
        cin >> x;
        a[i].ft = x;
        a[i].sd = bin[i] - '0';
    }
    int ind = 0;
    sort(a, a + n);
    rpt(n) {
        if (a[i].sd == 0) {
            neg0.insert({a[i].ft, ind});
            neg1.insert({a[i].ft - t, ind});
            ind++;
        }
    }
    neg0.insert({INT_MAX, ind});
    neg1.insert({INT_MAX, ind});
    rpt(n) {
        if (a[i].sd) {
            int prv = (*neg0.upper_bound({a[i].ft, n})).sd;
            int now = (*neg1.upper_bound({a[i].ft + t, n})).sd;
            ans += now - prv;
        }
    }
    cout << ans;
}