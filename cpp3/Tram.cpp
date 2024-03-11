#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n;
    int mx = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > mx) mx = sum;

    }

    cout << mx;
}