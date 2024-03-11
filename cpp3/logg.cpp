#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt[27];
        for (int i = 0; i < 27; i++) cnt[i] = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            cnt[s[i] - 'A' + 1]++;
        }

        int ans = 0;
        for (int i = 1; i <= 26; i++) {
            if (cnt[i] >= i) ans++;
        }

        cout << ans << endl;
    }
}