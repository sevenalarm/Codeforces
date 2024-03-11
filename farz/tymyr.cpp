#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, z;
    cin >> n >> m >> z;
    // int mx = max(m, n);
    int mx = m;
    int lim = z/mx;
    int kill = 0;
    for (int i=1; i<=lim; i++) {
        if (mx*i % n == 0) kill ++;
    }

    cout << kill;
}