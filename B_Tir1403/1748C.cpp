#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

map<ll, int> cnt;
const int mxn = 2e5 + 10;
int a[mxn], t, n, ans;
ll sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 0, sum = 0;
        cin >> n;
        rpt(n) cin >> a[i];
        int i = 0;
        while (i < n && a[i] != 0) {
            sum += a[i];
            if (sum == 0) ans++;
            i++;
        } 
        while (i < n) {
            cnt[sum]++;
            i++;
            while (i < n && a[i] != 0) {
                sum += a[i];
                cnt[sum]++;
                i++;
            }
            int mx = 0;
            for (auto it : cnt) mx = max(it.sd, mx);
            ans += mx;
            cnt.clear();
        }
        cout << ans << "\n";
    }
}