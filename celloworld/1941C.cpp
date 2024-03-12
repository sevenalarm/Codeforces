#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

string s;
int n, t, ans, i;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        ans = 0, i = 0;
        cin >> n;
        cin >> s;
        while (i < n - 2) {
            if (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') {
                ans++;
                i += 3;
            } else if (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') {
                if (i < n - 4 && s[i+3] == 'i' && s[i+4] == 'e') {
                    ans++;
                    i += 5;
                } else {
                    ans++;
                    i += 3;
                }
            } else i++;
        }
        cout << ans << "\n";
    }
}