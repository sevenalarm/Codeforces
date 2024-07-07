#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 5001;
int dp[mxn][mxn], a[mxn], n, t;
map<int, set<int>> dpp;
map<int, int> h;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        dpp.clear();
        h.clear();
        cin >> n;
        rpt(n) {
            cin >> a[i];
            h[a[i]]++;
        }
        int sz = h.size();
        rpt(n/2 + 1) {
            dp[i][0] = 1;
            dpp[i].insert(0);
            dpp[i].insert(1);
        }

        int i = 0;
        for (auto x : h) {
            if (i == 0) {
                i++;
            } else {
                range(0, n / 2 + 1) {
                    auto it = dpp[j].lower_bound(x.sd);
                    it--;
                    if (j < x.sd) dp[j][i] = dp[j][i-1] + 1;
                    else {
                        dp[j][i] = max(*it + 1, dp[j - x.sd][i - 1]);
                    }
                    cout << dp[j][i] << " ";
                    dpp[j].insert(dp[j][i]);
                }
                cout << endl;
                i++;
            }
        }
        cout << dp[n / 2][sz - 1] << "\n";
    }
}