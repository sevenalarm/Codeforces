#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, l, r, cnt, x;
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0, l = 0, r = n;
        string s;
        rpt(n) {
            cin >> x;
            s += to_string(x);
        }
        rpt(n){
            if (s[i] == '1') {
                l = i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '1') {
                r = i+1;
                break;
            }
        }

        range(l, r) {
            if (s[j] == '0') cnt++;
        }

        cout << cnt << endl;
    }
}