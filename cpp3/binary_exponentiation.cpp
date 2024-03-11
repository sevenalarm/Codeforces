#include <bits/stdc++.h>

using namespace std;


long long pw(long long x, long long y) {
    if(y == 0) return 1;
    if (y == 1) return x;
    if (y % 2 == 0) 
        return pw(x, y/2) * pw(x, y/2);
    else
        return pw(x, y/2) * pw(x, y/2) * x;
}

int main() {
    long long x, y;
    cin >> x >> y;
    cout << pw(x, y);
}