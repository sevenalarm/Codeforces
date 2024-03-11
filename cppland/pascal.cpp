#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

ll choose(int r, int n) {
    if (r == n) return 1;
    if (r == 0) return 1;
    return choose(r - 1, n - 1) + choose(r, n - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    rpt(n) {
        for (int j = 0; j <= i; j++) cout << choose(j, i) << " ";
        cout << endl;
    }

}