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

    int n, k;
    cin >> n >> k; // 3 2
    int a[n];
    vector<pair<int, int>> moves;
    rpt(n) cin >> a[i]; // 6 7 5
    int mn = 0, mx = 0, dis = 0, ans = 0;
    rpt(n) {
        if (a[i] > a[mx]) mx = i; // 1
        else if (a[i] < a[mn]) mn = i;
    }
    dis = a[mx] - a[mn];

    while (ans < k && dis != 0) {
        rpt(n) {
            if (a[i] > a[mx]) mx = i; // 1
            else if (a[i] < a[mn]) mn = i;
        }
        moves.push_back(make_pair(mx+1, mn+1));
        a[mx]--;
        a[mn]++;
        ans++;
        rpt(n) {
            if (a[i] > a[mx]) mx = i;
            else if (a[i] < a[mn]) mn = i;
        }
        dis = a[mx] - a[mn];
    }

    cout << dis << " " << ans << endl;
    rpt(moves.size()) {
        cout << moves[i].ft << " " << moves[i].sd << endl;
    }
}