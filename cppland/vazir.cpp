#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int ans = 0;
int n;
const int mxn = 2e5;
int a[mxn];


bool isValid(int col) {
    rpt(col) {
        if (a[i] == a[col]) return false;
        if (abs(a[i] - a[col]) == abs(i - col)) return false;
    }
    return true;
}

void generate(int col) {
    if (col == n) {
        // rpt(n) cout << a[i] << " ";
        // cout << endl;
        ans++;
        return;

    } else {
        rpt(n) {
            a[col] = i;
            if (isValid(col)) {
                generate(col+1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    generate(0);
    cout << ans;
}