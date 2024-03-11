#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

const int mxn = 1e7 + 10;
int mark[mxn];

void garbal() {
    mark[1] = 0;
    range(2, mxn) {
        if (!mark[i]) {
            for (int j = i * 2; j < mxn; j += i) {
                if (!mark[j]) mark[j] = i;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    garbal();
    int t, l, r, a, b;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        if (l == r) {
            if (!mark[l]) cout << -1 << endl;
            else {
                a = l/mark[l];
                b = l - l/mark[l];
                cout << a << " " << b << endl;
            }

        } else {
            if ((l == 2 || l == 1) && (r == 3 || r == 2)) cout << -1 << endl;
            else {
                if (l == 1 || l == 2) {
                    a = 2;
                    b = 2;
                } else {
                    a = r / 2;
                    b = r / 2;
                }
                cout << a << " " << b << endl;
            }
            
        }

    }
}