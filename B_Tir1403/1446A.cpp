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
ll n, t, w, sum, x;
pair<ll, int> a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> n >> w;
        rpt(n) {
            cin >> x;
            a[i] = {x, i+1};
            sum += a[i].ft;
        }
        sort(a, a + n);
        int ind = n-1;
        while (sum > w) {
            sum -= a[ind].ft;
            ind--;
        }
        if (sum >= (w + 1) / 2) {
            cout << ind+1 << "\n";
            rpt(ind+1) cout << a[i].sd << " ";
            cout << "\n";
        } else if (ind != n-1 && (w + 1)/2 <= a[ind+1].ft && a[ind+1].ft <= w) cout << 1 << "\n" << a[ind+1].sd << "\n";
        else cout << -1 << "\n";
    }
}