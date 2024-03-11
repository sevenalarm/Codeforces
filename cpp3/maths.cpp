#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    n /= 2;
    n++;
    int a[n];

    for (int i=0; i<n; i++) {
        a[i] = s[i*2] - '0';
    }

    sort(a, a+n);
    for (int i = 0; i<n-1; i++) {
        cout << a[i] << "+";
    }

    cout << a[n-1];

}