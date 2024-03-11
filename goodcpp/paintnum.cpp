#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 2e5 + 10;
int a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, mn = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i * 2; j <= n; j += i) {
            if (a[i] == a[j]) a[j] ++;
            if (a[j] > mn) mn = a[j];
        }
    }
    cout << mn + 1 << endl;
    range(1, n+1) cout << a[j] + 1 << " ";
    
}