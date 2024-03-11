#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// counting sort

int main() {
    int n, x;
    cin >> n;
    int cnt[n];
    int sorted[n];
    for (int i=0; i<n; i++) cnt[i] = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        cnt[x-1] ++;
    }

    int index = 0;
    for (int i=0; i<n; i++) {
        for (int j=index; j< index + cnt[i]; j++){
            sorted[j] = i+1;
        }
        index += cnt[i];
    }

    for (int i:sorted) cout << i << " ";
}