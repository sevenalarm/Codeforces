#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l1, r1, l2, r2;
    long long cnt = 0;
    cin >> n;
    for (int i = 1; i <= n/3; i++) { // 3
        l1 = i*2;  // 6
        r1 = i + (n-1) / 2; // 8
        r2 = n - i; // 9
        l2 = n - (n-1) / 2; // 7

        if (!(r1 < l2 || r2 < l1)) {
            if (r1 == l2) cnt++; // 1
            else if (l1 < l2){
                cnt += (r1 - l2 + 1) / 2;
            } else {
                cnt += (r2 - l1 + 1) / 2;
            }
        }

        cout << cnt << endl;
    }

    cout << cnt;
}