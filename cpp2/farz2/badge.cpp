#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i] = 0;
    }
    for (int j=0; j<n; j++) {
        int now=j, pre=0, dota=0;
        for (int i=0; i<n; i++) {
            b[i] = 0;
        }   
        // a = [2 3 2]
        // b = [1 2 1]
        while (pre < 2) { //now = 1
            b[now] += 1;
            pre = b[now]; //2
            dota = now + 1; //2
            now = a[now] - 1; //1
        }
        cout << dota << " ";
    }
}