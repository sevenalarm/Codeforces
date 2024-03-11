#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool acharge = min(a,b) == a;
    int minute = 1;
    if (a==1 && b==1 ) cout << 0;
    else{
        while (true) {
            if (a-2 <= 0 && b-2 <= 0 ) break;

            if (acharge) {
                a += 1;
                b -= 2;
            } else {
                b += 1;
                a -= 2;
            }

            if (a-2 <= 0 && !acharge) acharge = true;
            else if (b-2 <= 0 && acharge) acharge = false;
            minute++;

        }
        cout << minute;
    }
    

}