#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

// https://quera.org/contest/assignments/64036/problems/235291
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q, n;
    string s;
    cin >> q;
    while (q--) {
        v.clear();
        cin >> n;
        cin >> s;
        if (n < 2 || s[0] == '0') cout << "NO" << "\n";
        else {
            bool poss = true;
            v.pb(2);
            fori(2, n) {
                if (s[i] == '0') {
                    if (v.back() < 3) v.back()++;
                    else if (v.size() > 1 && v[(int)v.size() - 2] == 2 && s[i - 2] != '0') {
                        v[(int)v.size() - 2] = 3;
                    }
                    else poss = false;
                } else if (v.back() == 1) v.back() = 2;
                else v.pb(1);
            }
            int sz = v.size();
            if (poss && v.back() == 1) {
                if (v[sz - 2] == 2) {
                    v.pop_back();
                    v[sz - 2] = 3;
                } else if (sz > 2 && v[sz - 3] == 2 && s[n-3] != '0') {
                    v.pop_back();
                    v[sz - 3] = 3;
                } else poss = false;
            }

            if (poss) {
                cout << "YES" << "\n" << (int)v.size() << "\n";

                int i = 0;
                for (int p : v) {
                    // cout << p << " ";
                    range(0, p) {
                        cout << s[i];
                        i++;
                    }
                    cout << "\n";
                }
            } else cout << "NO" << "\n";
        }
    }
}