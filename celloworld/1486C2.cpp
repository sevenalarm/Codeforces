#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
// 5,1,4,2,3
int n, rp, a1, a2, m, ans;

int solve(int l, int r) { // 1, 
    if (l == r) return l;
    m = (l + r) / 2;
    if (a1 < a2) cout << "? " << m + 1 << " " << a2 << endl;
    else cout << "? " << a2 << " " << m << endl;
    cin >> rp;
    if (rp == a2) {
        if (a1 < a2) return solve(m + 1, r);
        else return solve(l, m);
    } else {
        if (a1 < a2) return solve(l, m);
        else return solve(m + 1, r);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int l, r;
    cin >> n;
    cout << "? " << 1 << " " << n << endl;
    cin >> a2;
    if (a2 != 1) {
        cout << "? " << 1 << " " << a2 << endl;
        cin >> rp;
        if (rp == a2) l = 1, r = a2 - 1, a1 = 0;
        else l = a2 + 1, r = n, a1 = n+1;
        
    } else l = a2 + 1, r = n, a1 = n+1;
    
    ans = solve(l, r);
    cout << "! " << ans << endl;
}