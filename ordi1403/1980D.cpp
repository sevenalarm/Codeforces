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
int a[mxn], b[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        rpt(n) cin >> a[i];
        rpt(n-1) b[i] = __gcd(a[i], a[i+1]);
        int ind = -1;
        bool poss = true;
        rpt(n-2) {
            // cout << b[i] << " ";
            if (b[i] > b[i+1]) {
                ind = i;
                break;
            } 
        }

        fori(ind + 2, n-2) {
            if (b[i] > b[i+1]) {
                poss = false;
                break;
            }
        }
        // cout << endl;
        if (poss) {
            int g1, g2, g3;
            if (ind == -1) cout << "YES";
            else if ((ind == 0 && b[1] <= b[2]) || (ind == n-3 && b[n-3] <= b[n-1])) cout << "YES";
            else {
                g1 = __gcd(a[ind-1], a[ind+1]);
                g2 = __gcd(a[ind], a[ind+2]);
                g3 = __gcd(a[ind+1], a[ind+3]);
                if ((ind == 1 || b[ind - 2] <= g1) && (ind > n - 3 || g1 <= b[ind+1]) && b[ind+1] <= b[ind+2]) cout << "YES";
                else if (b[ind - 1] <= g2 && (ind > n - 4 || g2 <= b[ind+2])) cout << "YES";
                else if (b[ind] <= g3 && (ind > n - 5 || g3 <= b[ind+3]) && b[ind-1] <= b[ind]) cout << "YES";
                else cout << "NO";
            }
        } else cout << "NO";
        cout << "\n";
    }
}
