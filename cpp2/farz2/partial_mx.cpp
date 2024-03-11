#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, ps[n], px[n], mx = 0, sum = 0;

    for (int i=0; i<n; i++) {
        cin >> x;
        sum += x;
        ps[i] = sum;
        if (sum > mx) mx = sum;
        px[i] = mx;
    }

    int mn = px[0];

    for (int i=1; i<n; i++) {
        if (ps[i] - px[i-1] < mn) mn = ps[i] - px[i-1];
    }
    cout << mn;
}

