#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e6 + 10;
ll a[mxn], n, q, z, f, q2[2], q1, x, ja;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> q;
    q2[0] = 1, q2[1] = n-1;
    while (q--) {
        cin >> x;
        if (x == 2) {
            f += q2[0];
            z += q2[1];
            swap(q2[0], q2[1]); 
        } else {
            cin >> x;
            if (x < 0) x = n + x;
            q1 += x;
            if (abs(x) % 2 == 1) swap(q2[0], q2[1]); 
        }
    }
    fori(1, n+1) {
        x = q1;
        if (i % 2 == 0) x += z;
        else x += f;
        x %= n;
        ja = i + x;
        ja %= n;
        if (ja == 0) ja = n;
        a[ja] = i;
    }
    fori(1, n+1) cout << a[i] << " ";
}