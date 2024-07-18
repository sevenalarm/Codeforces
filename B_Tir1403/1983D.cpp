#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
int a[mxn], b[mxn];
map<int, int> cnt;
int t, n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cnt.clear();
        cin >> n;
        rpt(n) cin >> a[i];
        rpt(n) {
            cin >> b[i];
            cnt[b[i]]++;
        }
        bool poss = true;
        rpt(n - 2) {
            if (cnt[a[i]]) cnt[a[i]]--;
            else poss = false;
        }
    }
}