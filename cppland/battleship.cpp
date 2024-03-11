#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 100;
int tmp[mxn];
int shots[mxn];
int n, a, k, m;

int countships(int l, int r) {
    int len = r - l - 1;
    if (len < a) return 0;
    return (len + 1) / (a + 1);
}

bool check (int mid) {
    rpt(mid) tmp[i] = shots[i];
    sort(tmp, tmp + mid);
    int ans = 0;
    ans += countships(0, tmp[0]);
    range(1, mid) {
        ans += countships(tmp[i-1], tmp[i]);
    }
    if (mid != 0) ans += countships(tmp[mid-1], n + 1);

    if (k > ans) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> a;
    cin >> m;
    rpt(m) cin >> shots[i];
 
    int l = 0, r = m, mid;
    if (check(m) == false) {
        cout << -1;
        return false;
    }
    while (l + 1 < r) {
        mid = (l + r) / 2; 
        bool cheat = check(mid);
 
        if (cheat) r = mid;
        else l = mid;
    }
 
    cout << r;
 
}