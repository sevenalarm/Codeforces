#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

bool ispol(int n) {
    string s = to_string(n);
    rpt(s.size() / 2) {
        if (s[i] != s[(int)s.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int ans = 0;
    fori(100, 1000) {
        range(100, 1000) {
            if (ispol(i * j)) ans = max(ans, i * j);
        }
    }

    cout << ans;
}