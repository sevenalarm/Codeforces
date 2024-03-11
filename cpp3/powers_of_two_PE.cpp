#include <bits/stdc++.h>

using namespace std;
const int mxn = 1000;
int a[mxn];

int main() {
    for (int i = 0; i < mxn; i++) a[i] = -1;
    int k, prev;
    cin >> k;
    a[0] = 1;
    int i = 0, carry = 0;
    // [2 1 0 0 0 0 0 0 0 0]
    while(k--){
        i = 0, carry = 0;
        while (a[i] != -1) {
            prev = a[i]; // 6
            a[i] = (prev * 2 + carry) % 10; 
            carry = (prev * 2 + carry) / 10; // 1
            i++; // 
        }
        a[i] = carry;
        if (carry == 0) i--;
    }
    // for (int x = 0; x < i; x++) cout << a[x];
    int sum = 0;
    for (int j = 0; j < mxn; j++) {
        if (a[j] != -1) sum += a[j];
    };
    cout << sum;

}