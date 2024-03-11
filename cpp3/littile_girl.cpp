#include <bits/stdc++.h>

using namespace std;
long long l, r, ans = 0, one = 1;

int main() {
    int i = 63;
    cin >> l >> r;
    if (l == r) cout << 0;
    else {
        while ((l >> i) == (r >> i)) {
            // ans += (1ll << i) & r;
            i--;
        }
        
        ans += (one << (i+1)) - 1;
        cout << ans;
    }
    


}