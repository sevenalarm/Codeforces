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
string s, c;
int ind[mxn], n, m, t, str[mxn];
map <int, int> mp;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m;
        cin >> s;
        mp.clear();
        rpt(m) cin >> ind[i];
        cin >> c;
        sort(ind, ind+m);
        rpt(m) str[i] = (int)c[i];
        sort(str, str+m);
        rpt(m) c[i] = (char)str[i];
        rpt(m) mp[ind[i]] = 1e5;
        int x = 0;
        rpt(m) {
            if (x < mp[ind[i]]) {
                mp[ind[i]] = x;
                x++;
            }
        }
        rpt(m) s[ind[i] - 1] = c[mp[ind[i]]];
        cout << s << "\n";
    }
}