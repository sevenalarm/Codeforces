#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
char s[mxn];
int n;

void chap(int baz, int len) {
    if (baz < 0) return;
    if (baz > n) return;
    if (len == 2 * n) {
        if (baz == 0) cout << s << endl;
        return;
    }

    s[len] = '(';
    chap(baz + 1, len + 1);
    s[len] = ')';
    chap(baz - 1, len + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    chap(0, 0);
}