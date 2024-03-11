#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1054/C

#define ll long long
#define rpt(a) for (int i = 0; i < (a); i++)
#define range(a, b) for (int j = (a); j < (b); j++)
#define ft first
#define sd second

const int mxn = 2000;
int r[mxn], l[mxn], res[mxn], mark[mxn];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    rpt(n) cin >> l[i];
    rpt(n) cin >> r[i]; 
    bool poss = true;
    int hand = n, mxcnt = 0;
    rpt(n) {
        if (l[i] == 0 && r[i] == 0) {
            mark[i] = 1;
            mxcnt++;
        }
    }

    while (mxcnt > 0) {
        rpt(n) {
            if (mark[i] == 1) {
                mark[i] = 2;
                range(0, i) {
                    if (!mark[j]) {
                        if (r[j] > 0) r[j]--;
                        else poss = false;
                    }
                }
                range(i+1, n) {
                    if (!mark[j]) {
                        if (l[j] > 0) l[j]--;
                        else poss = false;
                    }
                }
                res[i] = hand;
            }
        }
        mxcnt = 0;
        rpt(n) {
            if (l[i] == 0 && r[i] == 0 && !mark[i]) {
                mark[i] = 1;
                mxcnt++;
            }
        }
        hand--;
    }

    rpt(n) if (l[i] != 0 || r[i] != 0) poss = false;
    if (poss) {
        cout << "YES" << endl;
        rpt(n) cout << res[i] << " ";
    } else cout << "NO";
}
