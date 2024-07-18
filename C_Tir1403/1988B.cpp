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
int a[mxn], n, t, c0, c1, ind, ind2;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        ind = 0, ind2 = 0;
        while (ind < n) {
            if (s[ind] == '0') {
                while (ind < n && s[ind] == '0') ind++;
                a[ind2] = 0;
            } else {
                a[ind2] = 1;
                ind++;
            }
            ind2++;
        }

        c0 = 0, c1 = 0, ind = 0;
        while (ind < ind2) {
            if (a[ind] == 0) c0++;
            else c1++;
            if (c0 < c1) {
                c1 -= c0;
                c0 = 0;
            }
            ind++;
        }

        if (c0 == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
}