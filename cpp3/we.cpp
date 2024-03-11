#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 3;
    int b = a++ * 10;
    int c = ++a * 10;
    cout << a << " " << b << " " << c;
}