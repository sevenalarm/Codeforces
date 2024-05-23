#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define fori(a, b) for (int i=(a); i<(b); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

const int n = 81;
ll a[n][n], ans[n][n], ps[n][n], mn, p;

int_fast32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const int rows = n;
    const int cols = n;

    std::string line;
    for (int i = 1; i < rows; ++i) {
        std::istringstream ss(line);
        std::string value;
        for (int j = 1; j < cols; ++j) {
            a[i][j] = std::stoi(value);
        }
    }

    fori(1, n) {
        range(1, n) {
            ps[i][j] = ps[i-1][j] + a[i][j];
        }
    }

    range(1, n) {
        fori(1, n) {
            mn = 4e18;
            for (int k = 1; k < n; k++) { // 2
                if (k<=i) p = ans[k][j-1] + abs(ps[i][j] - ps[k-1][j]); // 0 + 
                else p = ans[k][j-1] + abs(ps[k][j] - ps[i-1][j]);
                mn = min(mn, p);
            }
            ans[i][j] = mn;
        }
    }

    mn = 4e18;
    fori(1, n) {
        mn = min(mn, ans[i][n-1]);
    }
    cout << mn;
}