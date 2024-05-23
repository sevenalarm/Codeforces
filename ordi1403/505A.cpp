#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

bool check(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        } else return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, s2 = "ab";
    cin >> s;
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        } else {
            if (s[l] == s[r-1]) {
                s2 = s.substr(0, l) + s[r] + s.substr(l, (int)s.size());
                if (check(s2)) cout << s2;
            }
            if (!check(s2) && s[l+1] == s[r]) {
                s2 = s.substr(0, r+1) + s[l] + s.substr(r+1, (int)s.size());
                if (check(s2)) cout << s2;
            }
            if (!check(s2)) cout << "NA";
            break;
        }
    }
    if (check(s)) {
        s2 = s.substr(0, (int)s.size()/2) + s[(int)s.size()/2] + s.substr((int)s.size()/2, s.size());
        cout << s2;
    }
}