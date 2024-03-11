#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int cover[26];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k, m, cvd, step;
    string s, bad;
    cin >> t;
    while (t--) {
        rpt(26) cover[i] = 0;
        cvd = 0, step = 0;
        bad = "";

        cin >> n >> k >> m;
        cin >> s;
        rpt(m) {
            int letter = s[i] - 'a'; 
            if (letter < k && cover[letter] == 0) {
                cover[letter] = 1;
                cvd++; // 2
            }
            if (cvd == k) {
                bad += s[i];
                step++; // 2
                rpt(k) cover[i] = 0;
                cvd = 0;
            }
        }

        if (step >= n) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
            char c = 'a';
            rpt(k) {
                if (!cover[i]) {
                    c = i + 'a';
                    break;
                }
            }
            cout << bad;
            rpt(n - step) cout << c;
            cout << endl;
            
        }
    }
}