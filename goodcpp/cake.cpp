#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

vector<int> ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        k /= __gcd(n, k);
        if (__builtin_popcount(k) != 1) ans.push_back(-1);
        else ans.push_back((int)log2(k));
    }
    for (int x:ans) cout << x << endl;  
}