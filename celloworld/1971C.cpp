#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        if ((a < c && d < b) || (c < a && b < d) || (b < c) || (d < a)) cout << "NO" << endl;
        else cout << "YES" << endl; 
    }
}