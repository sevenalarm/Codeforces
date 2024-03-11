#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

int main() {
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n; // 3
        int a[n];
        rpt(n) cin >> a[i]; // 1 2 3 2 2
        int l = 0, r = n-1;
        bool ans = false;
        while(a[l] == a[r] && l + 1 < r) {
            l++;            
            r--;
        }

        if (l == r || l + 1 == r) {
            ans = true;

        } else {
            int x1 = a[l], x2 = a[r]; // 1, 2
            int p1 = l, p2 = r;
            ans = true;
            // 1 2 3 2 2
            // use x1 : 1
            p1++; 
            while (p1 + 1 <= p2) {
                if (a[p1] == a[p2]) {
                    p1++;
                    p2--;

                } else {
                    if (a[p1] == x1) p1++;
                    else if (a[p2] == x1) p2--;
                    else {
                        ans = false;
                        break;
                    }
                }
            }

            if (ans == false) {
                // 1 2 3 2 2
                // use x2 : 2;
                p1 = l, p2 = r;
                p2--;
                ans = true;

                while (p1 + 1 <= p2) {
                    if (a[p1] == a[p2]) {
                        p1++;
                        p2--;

                    } else {
                        if (a[p1] == x2) p1++;
                        else if (a[p2] == x2) p2--;
                        else {
                            ans = false;
                            break;
                        }
                    }
                }
            }
        }

        if (ans) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}