#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemsets/acmsguru/problem/99999/271

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e5 + 4e4 + 10;
int n, k, m, ind;
map<char, int> isLetter;
string s, name;
deque<string> kta, zir;
string x;
bool rot = false;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    rpt(min(k, n)) {
        cin >> x;
        kta.push_back(x);
    }
    rpt(max(n-k, 0)) {
        cin >> x;
        zir.push_back(x);
    }

    for (int i = 'A'; i <= 'Z'; i++) isLetter[(char)i] = 1;
    rpt(m) {
        cin >> s;
        if (s == "ROTATE") rot = !rot;
        else {
            int j = 4;
            name = "";
            while (isLetter[s[j]]) {
                name += s[j];
                j++;
            }
            if (!rot) {
                kta.push_front(name);
                if (kta.size() > k) {
                    zir.push_front(kta.back());
                    kta.pop_back();
                }
            } else {
                kta.push_back(name);
                if (kta.size() > k) {
                    zir.push_front(kta.front());
                    kta.pop_front();
                }
            }
        }
    }

    if (!rot) for (auto b : kta) cout << b << endl;
    else for (int b = kta.size() - 1; b >= 0; b--) cout << kta[b] << endl;
    for (auto b : zir) cout << b << endl;

}
