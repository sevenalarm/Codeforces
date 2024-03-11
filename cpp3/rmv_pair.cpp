#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        int cnt[26];
        for (int i = 0; i<26; i++) cnt[i] = 0;
        cin >> s;

        for (int i = 0; i < n; i++) {
            int ind = (s[i] - 'a');
            cnt[ind] += 1;
        }
        
        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (2 * cnt[i] > n) {
                ans += cnt[i] - (n - cnt[i]); // 6 - (10 - 6)
            }
        }

        if (ans == 0 && n % 2 == 1) ans = 1;
        cout << ans << endl;
    }
}