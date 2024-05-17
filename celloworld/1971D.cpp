#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s;
    cin >> t;
    while (t--) {
        int cnt = 0;
        bool folan = false;
        cin >> s;
        rpt(s.size() - 1) {
            if (s[i] != s[i+1]) {
                cnt++;
                if (s[i] > s[i+1]) folan = true;
            }
        }
        if (cnt == 0) cout << 1 << "\n";
        else if (cnt == 1 && folan) cout << 2 << "\n";
        else cout << cnt << "\n";
    }
}