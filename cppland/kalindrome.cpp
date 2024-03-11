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
        cin >> n; // 3
        int a[n];
        rpt(n) cin >> a[i]; // 1 2 3
        int l = 0, r = n-1;
        bool ans = false;
        while(a[l] == a[r] && l + 1 < r) {
            l++;            
            r--;
        }

        if (l == r || l + 1 == r) {
            ans = true;

        } else {
            int x1 = a[l], x2 = a[r]; // 1, 3
            int p1 = l, p2 = r;
            ans = true;
            // use x1 : 1
            p1++; 
            while (p1 + 1 <= p2) {
                if (a[p1] == a[p2]) {
                    p1++;
                    p2--;

                } else {
                    if (a[p1] == x1) p1++;
                    else if (a[p2] == x1) p2--;
                    else ans = false;
                    break;
                }
            }

            // use x2;
            p1 = l, p2 = r;
            p2--;
            while (p1 + 1 <= p2) {
                if (a[p1] == a[p2]) {
                    p1++;
                    p2--;

                } else {
                    if (a[p1] == x2) p1++;
                    else if (a[p2] == x2) p2--;
                    else ans = false;
                    break;
                }
            }
        }

        if (ans) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}