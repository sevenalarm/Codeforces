#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, s2;
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        s2 = s;
        rpt(s.size() - 1) {
            if (s[i] != s[i+1]) {
                swap(s2[i], s2[i+1]);
                break;            
            }
        }
        if (s != s2) {
            cout << "YES" << endl << s2 << endl;
        } else cout << "NO" << endl;
    }


}