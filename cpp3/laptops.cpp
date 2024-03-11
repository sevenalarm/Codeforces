#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a+n);

    bool ans = false;
    for (int i = 1; i < n; i++) {
        if (a[i].first > a[i-1].first) {
            if (a[i].second < a[i-1].second) {
                ans = true;
            }
        }
    }

    if (ans) cout << "Happy Alex";
    else cout << "Poor Alex";
}