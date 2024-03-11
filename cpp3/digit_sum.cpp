#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, tmp;
    int ans = 0, nc = 0, ind = -1;
    cin >> n;
    tmp = n;
    string s = to_string(n);

    int lg10 = s.size(); // 2

    for (int i = 0; i < lg10; i++) {
        if (s[i] == '9') nc++; // 0
    }

    if (lg10 == 1) ans = n;

    else if (nc == lg10) ans = 9 * nc;

    else if (s[0] == '9') ans = (lg10 - 1) * 9 + 8; 
    
    else if (nc == lg10 - 1) ans = s[0] - '0' + (lg10 - 1) * 9;

    else ans = s[0] - '0' - 1 + (lg10 - 1) * 9;

    cout << ans << endl;
}
