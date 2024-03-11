#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

const int mxn = 1e5 + 10;
int m, n;
ll suma, sumb, cost, mn, bc[mxn];
int a[mxn], b[mxn], apt, bpt, l, r, hp = -1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    rpt(n) {
        cin >> a[i];
        suma += a[i];
    }
    rpt(m) {
        cin >> b[i];
        sumb += b[i];
    }
    sort(a, a+n);
    sort(b, b+m);

    if (b[m-1] <= a[0]) cout << 0;
    else {
        cost = sumb, mn = sumb;
        apt = 0, bpt = 0;
        rpt(m) {
            if (i == 0) {
                cost -= m * b[i];
                while (apt < n && a[apt] < b[i]) {
                    cost += b[i] - a[apt];
                    apt++;
                }

            } else {
                cost -= (m - i) * (b[i] - b[i-1]);
                cost += (ll)apt * (b[i] - b[i-1]);
                while (apt < n && a[apt] < b[i]) {
                    cost += b[i] - a[apt];
                    apt++;
                }
            }
            // cout << cost << " ";
            if (cost <= mn) {
                mn = cost;
                hp = i;
                bc[i] = cost;
            } else {
              break; 
            }
        }
        // cout << endl;
        if (hp != -1) {
            apt = 0;
            cost = mn;
            if (hp != 0) cost = bc[hp-1];
            if (hp != 0) l = b[hp-1];
            else l = b[hp];
            if (hp != m-1) r = b[hp + 1];
            else r = b[hp];
            // cout << l << " " << r << endl;
            while (apt < n && a[apt] < l) apt++;
            for (int j = l + 1; j <= r; j++) {
                cost -= m - hp;
                while (apt < n && a[apt] < j) apt++;
                cost += apt;
                if (cost <= mn) mn = cost;
                else {
                    // cout << j-1 << " ";
                    break;
                }
            }
        }
        cout << mn;
    }
}