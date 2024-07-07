#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
ll a[mxn], n, t, sum, ans;
map<ll, int> mp;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        mp.clear();
        mp[0] = 1;
        cin >> n;
        cin >> s;
        rpt(n) a[i] = s[i] - '0';
        sum = 0, ans = 0;
        rpt(n) {
            sum += a[i] - 1;
            ans += mp[sum];
            mp[sum]++;
        }
        cout << ans << "\n";
    }
}