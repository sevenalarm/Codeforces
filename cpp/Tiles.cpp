#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long ans = 4 * pow(2, n-1) * pow(2, m-1);
    cout << ans % 998244353;
}
