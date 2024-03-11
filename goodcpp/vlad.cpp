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

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int a = 0, b = 0;
        rpt(5) {
            if (s[i] == 'A') a++;
            else b++;
        }
        if (a > b) cout << 'A';
        else cout << "B";
        cout << endl;
    }
}