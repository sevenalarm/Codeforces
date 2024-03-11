#include <bits/stdc++.h>
#define ll long long
using namespace std;
// psychic

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, x, ind = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) ind = i;
    }

    int ans = 1e9, l = ind, r = n - l - 1; // l = 2 , r = 1
    k--;
    for (int i = 0; i <= k; i++) {
        int tmp = 1;

        if (l < i) continue;
        else if ((l - i) % k == 0) tmp += (l - i) / k; // 
        else tmp += (l - i) / k + 1;
        
        if (r < k - i) continue;
        else if ((r - (k - i)) % k == 0) tmp += (r - (k - i)) / k;
        else tmp += (r - (k - i)) / k + 1;

        if (tmp < ans) ans = tmp;
    }

    cout << ans;

}