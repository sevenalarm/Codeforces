#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, m;
    string s;
    int cnt[7];
    cin >> t;
    while (t--) {
        cin >> n >> m;
        rpt(7) cnt[i] = 0;
        cin >> s;
        rpt(s.size()) cnt[s[i] - 'A']++;
        int ans = 0;
        rpt(7) if (cnt[i] < m) ans+= m - cnt[i];
        cout << ans << "\n";
    }
}