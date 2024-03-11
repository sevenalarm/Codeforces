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
    cin >> n >> k;
    ll norm[n], ps[n];
    rpt(n) {
        cin >> norm[i];
        if (i == 0) ps[i] = norm[i];
        else ps[i] = ps[i-1] + norm[i];
    }

    

    int wake;
    rpt(n) {
        cin >> wake;
        if (i != 0) {
            if (wake) norm[i] = norm[i-1] + norm[i];
            else norm[i] = norm[i-1];

        } else if (!wake) norm[0] = 0;
    }


    ll ans = 0;
    rpt(n-k+1) {
        if (i == 0) {
            if (ans < ps[i + k - 1] + norm[n-1] - norm[i + k -1]) {
                ans = ps[i + k - 1] + norm[n-1] - norm[i + k -1];
            }
        } else {
            if (ans < norm[i - 1] + ps[i + k - 1] - ps[i - 1] + norm[n-1] - norm[i + k -1]) {
                ans = norm[i - 1] + ps[i + k - 1] - ps[i - 1] + norm[n-1] - norm[i + k -1];
            }
        }
    }
    cout << ans;
}