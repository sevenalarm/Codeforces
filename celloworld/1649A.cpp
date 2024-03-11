#include <bits/stdc++.h>
using namespace std;

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
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        rpt(n) cin >> a[i];
        int l = 0, r = n-1;
        while (a[l] == 1) l++;
        while (a[r] == 1) r--;
        cout << max(0, r - l + 2) << "\n";
    }
}