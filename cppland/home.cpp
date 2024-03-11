#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
ll cost[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, p;
    string s;
    cin >> t;
    while (t--) {
        rpt(mxn) cost[i] = 0;
        cin >> a >> b >> p;
        cin >> s;
        if (p < a && p < b) {
            cout << s.size() << endl;

        } else {
            for (int i = s.size() - 2; i >= 0; i --) {
                if (i == s.size() - 2) {
                    if (s[i] == 'A') cost[i] = a;
                    else cost[i] = b;

                } else {
                    if (s[i] != s[i + 1]) {
                        if (s[i] == 'A') cost[i] = cost[i + 1] + a;
                        else cost[i] = cost[i + 1] + b;   

                    } else cost[i] = cost[i + 1];
                }
            }

            int l = -1, r = s.size() - 1, mid;
            while (l + 1 < r) {
                mid = (l + r) / 2;
                if (cost[mid] <= p) r = mid;
                else l = mid;
            }

            cout << r + 1 << endl;
        }
    }
}