#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int l[26];

void do_main() {
    int n, k, ans = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 'a'; i <= 'z'; i++) {
        int cnt[2] = {0, 0};
        for (int j = 0; j < n; j++) {
            cnt[0] += (s[j] == i);
            cnt[1] += (s[j] == 'A' + (i - 'a'));
        }
        ans += min(cnt[0], cnt[1]);
        int x = abs(cnt[0] - cnt[1]);
        ans += min(k, x/2);
        k = max(0, k - x/2);
    }
    cout << ans << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        do_main();
    }
}