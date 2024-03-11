#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i = (a); i < (b); i++)

const int mxn = 1e6 + 100;
int mark[mxn];

void garbal() {
    mark[0] = 1;
    mark[1] = 1;
    range(2, mxn) {
        if (!mark[i]) {
            for (int j = i*2; j < mxn; j += i) {
                mark[j] = 1;
            }
        } 
    }
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    garbal();
    // rpt(100) if (!mark[i]) cout << i << " ";
    // cout << endl;
    int n;
    cin >> n;
    ll a[n];
    rpt(n) cin >> a[i];
    rpt(n) {
        double thing = a[i];
        double rad = sqrt(thing);
        ll radint = rad;
        if (radint == rad) {
            if (!mark[radint]) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else cout << "NO" << endl;
    }
}
