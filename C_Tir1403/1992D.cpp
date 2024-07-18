#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
int n, m, k, t, ind, cnt;
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        cin >> s;
        s = "L" + s;
        ind = 0, cnt = 0;
        bool poss = true;
        while (poss && ind <= n) {
            if (s[ind] == 'W') {
                if (cnt < k) {
                    ind++;
                    cnt++;
                } else poss = false;
            } else if (s[ind] == 'C') poss = false;
            else {
                if (ind + m > n) break;
                int i = 1, good = 0, water = 0;
                while (ind + i <= n && i <= m){
                    if (s[ind + i] == 'L') good = ind + i;
                    else if (s[ind + i] == 'W') water = ind + i;
                    i++;
                } 
                if (good) ind = good;
                else if (water) ind = water;
                else poss = false;
            }
        }

        if (!poss) cout << "NO" << "\n";
        else cout << "YES" << "\n";

    }
}