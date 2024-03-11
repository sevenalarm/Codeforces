#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int ans1, ans2, k, q, one = 1;
    cout << "? ";

    for (int i = 1; i < 101; i++) cout << i << " ";
    cout << endl;
    cin >> ans1;   
    k = ans1;
    k = k >> 7;
    k = k << 7;

    cout << "? ";
    for (int i = 1; i < 101; i++) cout << (i << 7) << " ";
    cout << endl;
    cin >> ans2;
    q = ans2;
    q %= 1 << 7;

    cout << "! " << k + q;

}