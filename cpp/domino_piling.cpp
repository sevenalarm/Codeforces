#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int res1 = n*m/2;
    int res2 = m*n/2;
    cout << max(res1, res2);
}