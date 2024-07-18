#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t, dast;
    cin >> s >> t;
    int n = s.size();
    bool ans = false;
    rpt(n-1) {
        range(i + 1, n) {
            int k = i;
            dast = "";
            while (k < n) {
                dast += s[k];
                k += j;
            }
            if (dast == t) ans = true;
        }
    }

    if (ans) cout << "Yes";
    else cout << "No";
}