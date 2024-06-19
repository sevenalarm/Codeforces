#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll f[50];

void fib(int n) {
    int i = 49;
    while (n) {
        if (f[i] == n) {
            cout << f[i];
            n = 0;
        } else if (f[i] < n) {
            cout << f[i] << " + ";
            n -= f[i];
        }
        i--;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    f[0] = 1;
    f[1] = 2;
    fori(2, 50) f[i] = f[i-1] + f[i-2];

    int n;
    cin >> n;
    fib(n);
}
