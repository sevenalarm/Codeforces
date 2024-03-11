#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    int ans = 1;
    range(1, s.size()) {
        if (s[j] != s[j-1]) ans++;
    }
    if (ans == n || ans == n-1) cout << n;
    else cout << ans + 2;
}