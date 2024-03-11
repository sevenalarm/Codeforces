#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define endl "\n"

int cnt[26];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    string s1, s2;
    bool poss;
    cin >> t;
    while (t--) {
        poss = true;
        cin >> n >> k;
        cin >> s1 >> s2;
        rpt(26) cnt[i] = 0;
        rpt(n) cnt[s1[i] - 'a']++;
        rpt(n) cnt[s2[i] - 'a']--;
        rpt(26) if (cnt[i] != 0) poss = false;
        if (n < k) poss = false;

        if (!poss && s1 != s2) cout << "NO" << endl;
        else if (2 * k <= n || s1 == s2) cout << "YES" << endl; 
        else {
            range(n - k, k) {
                if (s1[j] != s2[j]) poss = false;
            }
            if (poss) cout << "YES" << endl;
            else cout << "NO" << endl;
        }       
    }
}
