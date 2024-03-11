#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
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
        bool ok = true;
        int i = 0;
        if (s[0] == 'm' || s[i] == 'M') {
            while (s[i] == 'm' || s[i] == 'M') i++;

            if (i < n && (s[i] == 'e' || s[i] == 'E')) {
                while (s[i] == 'e' || s[i] == 'E') i++;

                if (i < n && (s[i] == 'o' || s[i] == 'O')) {
                    while (s[i] == 'o' || s[i] == 'O') i++;
                    
                    if (i < n && (s[i] == 'w' || s[i] == 'W')) {
                        while (s[i] == 'w' || s[i] == 'W') i++;
                        
                        if (i != n) ok = false;
                    } else ok = false;
                } else ok = false;
            } else ok = false;
        } else ok = false;

        if (ok) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}