#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

ll a[35][35];
int delta = 10979;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    a[1][0] = 1;
    fori(1, 35) {
        range(1, 35) {
            a[i][j] = a[i-1][j] + a[i][j-1];
            a[i][j] %= delta;
        }
    }

    cout << a[34][34];
}