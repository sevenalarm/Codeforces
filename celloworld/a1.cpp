#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pub push_back

const int mxn = 5e5 + 10;
vector<int> a[mxn];
int pb[mxn];
string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    pb[0] = 0;
    for (int i = 1; i < (int)s.size(); i++) {
        // cout << s[i];
        if (s[i-1] == '(') pb[i] = pb[i-1] + 1;
        else pb[i] = pb[i-1] - 1;
    }

    for (int i = s.size() - 1; i >= 0; i--) {
        a[pb[i]].pub(i);
    }

    rpt(mxn) {
        for (int x : a[i]) {
            cout << s[x];
        }
    }
}