#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    long long pz[n]; // [0 1 2 ]
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[0] == 0) pz[0] = 1;
            else pz[0] = 0;

        } else {
            if (a[i] == 0) pz[i] = pz[i-1] + 1;
            else pz[i] = pz[i-1];
        }
    }

    int l = 0, r = n + 1, mid;
    int ansi = -1, ansj = -1;
    while (r - l > 1) {
        mid = (l + r) / 2; // 5
        bool poss = false;

        for (int i = mid - 1; i < n; i++) { // 5
            if (i == mid - 1) {
                if (pz[i] - k <= 0) {
                    poss = true; 
                    ansi = 0;
                    ansj = i;
                }

            } else {
                if (pz[i] - pz[i - mid] - k <= 0) {
                    poss = true;
                    ansi = i - mid + 1;
                    ansj = i;
                }
            }
        }

        if (poss) l = mid;
        else r = mid;
    }

    cout << l << endl;

    for (int i = 0; i < n; i++) {
        if (ansi <= i && i <= ansj) cout << 1 << " ";
        else cout << a[i] << " ";
    }
    
}