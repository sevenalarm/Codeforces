#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 10;
int ways[64], x, mod = 1e9 + 7;
string s;
ll ans;
map<char, int> mp;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    rpt(64) {
        range(0, 64) {
            x = i & j;
            ways[x]++;
        }
    }
    rpt(10) mp[(char)'0' + i] = i;
    rpt(26) mp[(char)'A' + i] = i + 10;
    rpt(26) mp[(char)'a' + i] = i + 36;
    mp['-'] = 62;
    mp['_'] = 63;
    ans = 1;
    rpt(s.size()) {
        ans *= ways[mp[s[i]]];
        ans %= mod;
    }

    cout << ans;
}