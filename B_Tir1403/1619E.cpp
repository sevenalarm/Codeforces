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
int a[mxn], n, t, ind;
map<int, int> cnt;
map<int, ll> dp;
vector<int> good;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ind = 0;
        cnt.clear();
        dp.clear();
        good.clear();
        cin >> n;
        rpt(n) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a, a+n);
        cout << cnt[0] << " ";
        dp[0] = cnt[0];
        fori(1, n + 1) {
            if (a[ind] > ind && i >= a[ind]) dp[i] = -1; 
            else {
                while (ind < n  && a[ind] < i) {
                    if (ind && a[ind] == a[ind-1]) good.pb(ind);
                    ind++;
                }
                
                if (cnt[i-1]) dp[i] = dp[i-1] - cnt[i-1] + cnt[i];
                else {
                    if (good.size()) {
                        dp[i] = dp[i-1] + ind - good.back() + cnt[i];
                        good.pop_back();
                    } else dp[i] = -1;
                }
            }
            cout << dp[i] << " ";
        }
        cout << "\n";
    }
}
