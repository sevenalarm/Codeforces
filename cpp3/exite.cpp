#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;

        int curr = n - k;
        while (curr <= n) {
            cout << curr << " ";
            curr ++;
        }

        for (int i = n - k - 1; i >= 1; i--) cout << i << " "; 

        cout << endl;


    }

}