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
int cur, l, mn, sz, kev, k;
set<string> ans;

int keven(int st, int l) { 
    kev = 0;
    rpt(l) kev += (s[st + i] != s[st + i + l]);
    return kev;
}

int main() {
    cin >> k;
    cin >> s;
    sz = s.size();
    s += s;
    for (l = sz / 2; l > 0; l--) {
        cur = keven(0, l);
        if (cur <= k) ans.insert(s.substr(0, 2 * l));
        fori(1, sz) {
            cur -= (s[i-1] != s[i-1+l]); //1, 4
            cur += (s[i-1+l] != s[i-1+l+l]); //4, 7
            // if (l == 3) cout << (s[i-1] == s[i-1+l]) << " " << (s[i-1+l] == s[i-1+l+l]) << endl;
            if (cur <= k) ans.insert(s.substr(i, 2 * l));
        }
        if (ans.size()) break;
    }
    if (l != 0) cout << *ans.begin();
    else cout << "\n";
}