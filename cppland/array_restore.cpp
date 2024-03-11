#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 100;
int mark[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    int a[n];
    bool seen = false;
    rpt(n) {
        cin >> a[i];
        if (a[i] == q) seen = true;
    }
    bool poss = true;
    set<int> dide;
    int fzi = -1;
    rpt(n) {
        if (a[i] == q) seen = true;
        if (i == 0) {
            if (a[i] == 0) {
                a[i] = 1;
                fzi = 0;
            }
            else dide.insert(a[i]); // 2 , 4 , 6

        } else {
            if (a[i] == 0) {
                a[i] = a[i-1];
                if (fzi == -1) fzi = i;

            } else {
                if (mark[a[i]]) poss = false;

                else if (a[i-1] > a[i]) {
                    auto pt = dide.upper_bound(a[i]);

                    while (pt != dide.end()) {
                        // cout << *pt << " "`;
                        mark[*pt] = 1;
                        pt = dide.erase(pt);
                    }
                    dide.insert(a[i]);

                } else dide.insert(a[i]);
            }
        }
    }

    if (!seen) {
        if (fzi == -1) poss = false;
        else a[fzi] = q;
    }

    if (poss) {
        cout << "YES" << endl;
        rpt(n) cout << a[i] << " ";
    } else cout << "NO";
}