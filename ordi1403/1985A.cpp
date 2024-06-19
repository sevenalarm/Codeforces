#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        swap(s1[0], s2[0]);
        cout << s1 << " " << s2 << "\n";
    }
}