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
int delta = 10979;

bool fib(int n) {
    fori(1, 50) {
        if (n % f[i] == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    f[0] = 1;
    f[1] = 2;
    fori(2, 50) f[i] = f[i-1] + f[i-2];
    double cnt = 0;
    fori(1e5, 1e6) {
        if (fib(i)) cnt++;
    }
    cout << cnt << " ";
    cout << fixed << setprecision(10) << cnt / (9e5) * 100;

}
