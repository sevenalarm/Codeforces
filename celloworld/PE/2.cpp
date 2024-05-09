#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

ll sum = 2, a = 1, b = 2, tmp;
int n = 4 * 1e6;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (a + b <= n) {
        if ((a + b) % 2 == 0) sum += a + b;
        tmp = a + b; // 2
        a = b; // 1
        b = tmp; //2
    }
    cout << sum;
}