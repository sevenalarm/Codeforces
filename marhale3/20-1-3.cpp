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

string binstr(int n) {
    string s;
    while (n) {
        s = to_string(n%2) + s;
        n/=2;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n;
    ll ans = 1;
    string s = "1", bin;
    fori(2, n+1) {
        bin = binstr(i); // 10
        l = bin.size(); // 2
        bool poss = true;
        while (l >= 0) {
            poss = true;
            for (int j = 0; j < l; j++) {
                if (l > ans || s[ans - l + j] != bin[j]) {
                    poss = false;
                    break;
                }
            }
            if (poss) {
                s += bin.substr(l, (int)bin.size());
                ans = s.size();
                break;
            }
            l--;
        }
    }
    // cout << s;
    ans = s.size();
    cout << (ans * 1389) % delta;

}   