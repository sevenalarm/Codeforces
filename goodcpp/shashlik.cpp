#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1054/C

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int tike = 2 * k + 1, st;
    if (n >= k + 1) {
        if (n % tike == 0 || n % tike > k) {
            st = k + 1;
        } else {
            st = n % tike;
        }
    } else st = 1;
    vector<int> a;
    int ans = 0;
    while (st <= n) {
        ans++;
        a.push_back(st);
        st += tike;
    }
    cout << ans << endl;
    for (int x:a) cout << x << " ";
}