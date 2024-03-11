#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)

const int mxn = 2e5 + 10;
int bast[26][2];
string s;
int dp[mxn][2];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, ind, dis, cnum;
    cin >> t;
    while (t--) {
        rpt(26) {
            bast[i][0] = -1;
            bast[i][1] = -1;
        }
        cin >> s;
        
        rpt((int)s.size()) {
            cnum = s[i] - 'a';
            if (i == 0) {
                dp[i][0] = 1;
                bast[cnum][0] = i;
                bast[cnum][1] = 0;
                dp[i][1] = dp[i][0];

            } else {
                dp[i][0] = dp[i-1][1] + 1;
                ind = bast[cnum][0];
                dis = bast[cnum][1];

                if (dis != -1) {
                    if (ind == 0) {
                        dp[i][1] = dis - 1;

                    } else {
                        dp[i][1] = dis - 1 + dp[ind - 1][1];
                    }

                    dp[ind][1] = min(dp[ind][1], dp[i][1]);
                    dp[i][1] = min(dp[i][1], dp[i][0]);
                    bast[cnum][0] = -1;
                    bast[cnum][1] = -1;

                } else {
                    bast[cnum][0] = i;
                    bast[cnum][1] = 0;
                    dp[i][1] = dp[i][0];
                }
            }
            range(0, 26) {
                if (bast[j][1] != -1) bast[j][1]++;
            }
        }

        cout << dp[(int)s.size()-1][1] << endl;
    }
}