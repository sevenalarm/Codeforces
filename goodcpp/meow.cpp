#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        char state = 'm';
        bool ok = true;
        
        if (s[0] != 'm' && s[0] != 'M') ok = false;
        range(1, n) {
            if (state == 'm' && s[i] != 'm' && s[i] != 'M') {
                if (s[i] == 'e' || s[i] == 'E') {
                    state = 'e';
                } else ok = false;

            } else if (state == 'e' && s[i] != 'e' && s[i] != 'E') {
                if (s[i] == 'o' || s[i] == 'O') {
                    state = 'o';
                } else ok = false;

            } else if (state == 'o' && s[i] != 'o' && s[i] != 'O') {
                if (s[i] == 'w' || s[i] == 'W') {
                    state = 'w';
                } else ok = false;

            } else if (state == 'w' && s[i] != 'w' && s[i] != 'W') ok = false;
        }
        if (ok && state == 'w') cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
}