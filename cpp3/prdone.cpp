#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt0 = 0, cnt1 = 0, cntm1 = 0;
    long long cost = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            cntm1++;
            cost += abs(a[i]) - 1;
        }
        else if (a[i] == 0) cnt0++;
        else {
            cnt1++;
            cost += a[i] - 1;
        }

    }

    cost += cnt0;
    if (cnt0 == 0 && cntm1 % 2 == 1) cost += 2;
    cout << cost;
}