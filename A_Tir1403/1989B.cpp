#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int t, x, ans;
string a, b, s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 2e9;
        cin >> a;
        cin >> b;
        rpt((int)b.size()) {
            x = i;
            s = b.substr(0, x) + a;
            range(x, s.size()) {
                if (x < b.size() && s[j] == b[x]) x++;
            }
            range(x, b.size()) s += b[j];
            ans = min(ans, (int)s.size());
        }
        cout << ans << "\n";
    }
}