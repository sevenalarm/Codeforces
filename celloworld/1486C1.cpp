#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
// 5 1 4 2 3
int rp1, rp2, mid, l2, r2;

int solve(int l, int r) { 
    if (l == r) return l;
    cout << "? " << l << " " << r << endl;
    cin >> rp1; 
    if (l + 1 == r) return l + r - rp1;
    else {
        mid = (l + r) / 2; 
        l2 = l, r2 = r;
        if (rp1 <= mid) r2 = mid;
        else l2 = mid + 1;
        if (l2 != r2) {
            cout << "? " << l2 << " " << r2 << endl;
            cin >> rp2;
            if (rp1 == rp2) return solve(l2, r2);
            else {
                if (rp1 <= mid) return solve(mid + 1, r);
                else return solve(l, mid);
            }
        } else {
            if (rp1 <= mid) return solve(mid + 1, r);
            else return solve(l, mid);
        }

        
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans;
    cin >> n;
    ans = solve(1, n);
    cout << "! " << ans;
}