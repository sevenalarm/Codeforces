#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int delta = 10739;

bool rond(int x) {
    string s = to_string(x);
    if ((s[1] == s[2] && s[2] == s[3] && s[4] == s[5] && s[5] == s[6]) || // a bbb ccc
        (s[1] == s[2] && s[0] == s[1] && s[4] == s[5] && s[5] == s[6]) || // aaa b ccc
        (s[1] == s[2] && s[0] == s[1] && s[4] == s[5] && s[3] == s[4]) || // aaa bbb c
        (s[1] == s[0] && s[2] == s[3] && s[4] == s[5] && s[5] == s[6]) || // aa bb ccc
        (s[1] == s[0] && s[2] == s[3] && s[4] == s[3] && s[5] == s[6]) || // aa bbb cc
        (s[1] == s[2] && s[2] == s[0] && s[4] == s[3] && s[5] == s[6]) || // aaa bb cc
        (s[1] == s[3] && s[5] == s[3] && s[0] == s[2] && s[2] == s[4] && s[6] == s[4]) // a b a b a b a
    ) {
        return true;
    }
    return false;
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ans = 0;
    for (int i = 1000000; i < 7801389; i++) {
        if (rond(i)) ans ++;
    }
    cout << ans << endl;
    cout << (ans * ans) % delta;
    // int n;
    // cin >> n;
    // if (rond(n)) cout << "phs";
    // else cout << "lol no";
}