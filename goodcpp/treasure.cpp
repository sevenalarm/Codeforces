#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int ind = -1, baz = 0, cnt = 0;
    rpt(s.size()) {
        if (s[i] == '#') {
            s[i] = ')';
            ind = i;
            baz--;
            cnt++;
        } else if (s[i] == '(') baz++;
        else baz--;
    }
    int dast = 0;
    bool good = true;
    rpt(s.size()) {
        if (s[i] == '(') dast ++;
        else dast--;
        if (i == ind) dast -= baz;
        if (dast < 0) good = false;
    }

    if (dast != 0 || baz < 0) good = false;
    if (good) {
        rpt(cnt-1) cout << 1 << endl;
        cout << 1 + baz;
    } else cout << -1;
}