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
    char lt[27];
    rpt(26) {
        lt[i+1] = i + 'a';
    }
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string ans;
        if (n > 53) {
            ans += lt[n - 52];
            ans += "zz";
        } else {
            ans += 'a';
            if (n > 28) {
                ans += lt[n - 27];
                ans += 'z';
            } else {
                ans += 'a';
                if (n > 3) {
                    ans += lt[n - 2];
                } else ans += 'a';
            }
        }

        cout << ans << endl;
    }
}