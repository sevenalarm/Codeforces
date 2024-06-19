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
pair<int, int> a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, p1, p2;
    cin >> n >> x;
    rpt(n) {
        cin >> a[i].ft;
        a[i].sd = i;
    }
    sort(a, a+n);
    p1 = 0, p2 = n-1;
    while (p1 < p2) {
        if (a[p1].ft + a[p2].ft == x) break;
        else if (a[p1].ft + a[p2].ft < x) p1++;
        else p2 --;
    }
    if (p1 != p2) cout << a[p1].sd + 1 << " " << a[p2].sd + 1;
    else cout << "IMPOSSIBLE";
}