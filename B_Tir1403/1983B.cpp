#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 500;
int a[mxn][mxn], b[mxn][mxn], n, m, t;
int asum, bsum;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m;
        rpt(n) {
            cin >> s;
            range(0, m) a[i][j] = s[j] - '0';
        }
        rpt(n) {
            cin >> s;
            range(0, m) b[i][j] = s[j] - '0';
        }
        bool ans = true;

        rpt(n) {
            asum = 0, bsum = 0;
            range(0, m) {
                asum += a[i][j];
                bsum += b[i][j];
            }
            if ((asum % 3) != (bsum % 3)) ans = false;
        }
        rpt(m) {
            asum = 0, bsum = 0;
            range(0, n) {
                asum += a[j][i];
                bsum += b[j][i];
            }
            if ((asum % 3) != (bsum % 3)) ans = false;
        }
        
        if (ans) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}