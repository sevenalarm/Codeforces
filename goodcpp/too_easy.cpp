#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/913/problem/D

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> n >> t;
    pair<int, pair<int, int>> a[n];
    rpt(n) {
        cin >> a[i].sd.ft >> a[i].ft;
        a[i].sd.sd = i;
    }
    sort(a, a + n);

    int l = 0, r = 2e9, mid, solved = 0;
    ll sum;
    while (r - l > 1) {
        mid = (l + r) / 2;
        solved = 0;
        sum = 0;
        rpt(n) {
            if (a[i].sd.ft >= mid) {
                if (sum + a[i].ft <= t) {
                    solved++;
                    sum += a[i].ft;
                }
            }
            if (sum >= t) break;
        }

        if (solved >= mid) l = mid;
        else r = mid;
    }

    cout << l << endl;
    cout << l << endl;
    solved = 0;
    rpt(n) {
        if (a[i].sd.ft >= l && solved < l) {
            cout << a[i].sd.sd + 1 << " "; 
            solved++;
        }
    }
    
}