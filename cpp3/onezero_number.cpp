#include <bits/stdc++.h>

using namespace std;

// fix this !
// 27 aban 1402

int main() {
    bool ten = true;
    string s = "1";
    cout << "hello" << endl;
    long long k, n = 1;
    cin >> k;
    bool seen[k];
    bool bad = false;
    for (int i = 0; i < k; i++) seen[i] = false;

    while((n % k) != 0) {
        cout << n << " " << n % k << endl;
        n = n%k;
        
        if (ten) {
            n = n*10 % k;
            if (seen[n]) {
                bad = true;
                break;
            }
            else seen[n] = true;
            s += '0';
        }

        else {
            n++;
            s.back() = '1';
        }
        ten = !(ten);
    }

    cout << s;
    if (bad) cout << "BAKHTI";
}