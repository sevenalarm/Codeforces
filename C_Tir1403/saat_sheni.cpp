#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

// https://quera.org/contest/assignments/64034/problems/228645
// wtf dude.


const int mxt = 300 + 10;
ll n, m, t, T, u, minute, dp[mxt][2], last;
map<int, int> mark;
bool poss, ans1, ans2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> T;
        mark.clear();
        rpt(n) {
            cin >> u;
            mark[u] = 1;
        }
        
        dp[0][0] = m;
        dp[0][1] = m;
        poss = true;
        fori(1, T) {
            if (mark[i]) {
                dp[i][0] = max(m - (dp[i-1][1] - 1), dp[i-1][0] - 1);
                if (dp[i-1][1] > 1) dp[i][1] = min(m - (dp[i-1][0] - 1), dp[i-1][1] - 1);
                else dp[i][1] = m - (dp[i-1][0] - 1);
            } else {
                dp[i][0] = dp[i-1][0] - 1;
                if (dp[i-1][1] > 1) dp[i][1] = dp[i-1][1] - 1;
                else dp[i][1] = dp[i-1][0] - 1;
                if (dp[i][0] < 1 || dp[i][1] < 1) poss = false;
            }

            // cout << dp[i][0] << " " << dp[i][1] << endl;
        }
        ans1 = poss;

        poss = true, minute = 0, last = 0;
        u = m;
        while (poss && minute < T) {
            if (T <= minute + u) break;
            fori(1, u+1) if (mark[minute + i]) last = minute + i;
            if (last == minute) poss = false;
            u = m - u + last - minute;
            minute = last;
        }
        ans2 = poss;
        poss = ans1 || ans2;

        if (poss) cout << "YES\n";
        else cout << "NO\n";
    }
}