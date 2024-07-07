#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

string s;
int x, good;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    good = -1;
    rpt(s.size()) {
        range(i+1, s.size()) {
            for (int k = j+1; k < s.size(); k++) {
                x = 100 * (int)(s[i] - '0') + 10 * (int)(s[j] - '0') + (int)s[k] - '0';
                if ((x % 8) == 0) good = x;
            }
        }
    }
    rpt(s.size()) {
        range(i+1, s.size()) {
            x = 10 * (int)(s[i] - '0') + (int)(s[j] - '0');
            if ((x % 8) == 0) good = x;
        }
    }
    rpt(s.size()) {
        x = (int)(s[i] - '0');
        if ((x % 8) == 0) good = x;
    }
    if (good != -1) cout << "YES" << endl << good;
    else cout << "NO";
}