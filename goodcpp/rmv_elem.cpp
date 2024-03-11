#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

void do_main() {
    int n, ans = 1;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 2; i < n; i++) {
        if (s[i] != s[i-2]) ans++;
    }
    cout << ans << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        do_main();
    }
}