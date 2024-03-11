#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
int h;
ll ans;
string s;

// https://quera.org/problemset/10169

int main() {
    cin >> h >> s;
    ans = 1;
    rpt(s.size()) {
        ans *= 2;
        if (s[i] == 'R') ans++;
    }
    cout << (1ll << (h+1)) - ans;
}