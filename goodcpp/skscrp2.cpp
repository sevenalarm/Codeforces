#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)
#define ft first
#define sd second

const int mxn = 5e5 + 10;
ll dpl[mxn], dpr[mxn];
int a[mxn];
pair<int, int> chain[mxn];

int main() {
    ll n, pt, l, r, mid;
    // scanf("%d", &n);
    // rpt(n) scanf("%d", &a[i]);
    cin >> n;
    rpt(n) cin >> a[i];

    dpl[0] = a[0];
    chain[0].ft = a[0];
    chain[0].sd = 0;
    pt = 0; 
    range(1, n) {
        if (a[i] < chain[0].ft) {
            dpl[i] = (ll)(i+1) * a[i];
            chain[0].ft = a[i];
            chain[0].sd = i;
            pt = 0;

        } else {
            l = 0, r = pt+1;
            while (r - l > 1) {
                mid = (l + r) / 2;
                if (chain[mid].ft <= a[i]) l = mid;
                else r = mid;
            }

            dpl[i] = dpl[chain[l].sd] + (ll)(i - chain[l].sd) * a[i];
            pt = l + 1;
            chain[pt].ft = a[i];
            chain[pt].sd = i;
        }
    }

    // reverse the array
    rpt(n/2) {
        swap(a[i], a[n-i-1]);
    }

    dpr[0] = a[0];
    chain[0].ft = a[0];
    chain[0].sd = 0;
    pt = 0;
    range(1, n) {
        if (a[i] < chain[0].ft) {
            dpr[i] = (ll)(i+1) * a[i];
            chain[0].ft = a[i];
            chain[0].sd = i;
            pt = 0;

        } else {
            l = 0, r = pt+1;
            while (r - l > 1) {
                mid = (l + r) / 2;
                if (chain[mid].ft <= a[i]) l = mid;
                else r = mid;
            }

            dpr[i] = dpr[chain[l].sd] + (ll)(i - chain[l].sd) * a[i];
            pt = l + 1;
            chain[pt].ft = a[i];
            chain[pt].sd = i;
        }
    }

    // reverse the array and dpr
    rpt(n/2) {
        swap(a[i], a[n-i-1]);
        swap(dpr[i], dpr[n-i-1]);
    }

    ll mx = 0;
    int ind = -1;
    rpt(n) {
        if (dpl[i] + dpr[i] - a[i] > mx) {
            mx = dpl[i] + dpr[i] - a[i];
            ind = i;
        }
    }

    // cout << ind << endl;
    range(ind + 1 , n) {
        a[i] = min(a[i], a[i-1]);
    }
    for (int i = ind - 1; i >= 0; i--) {
        a[i] = min(a[i], a[i+1]);
    }
    
    // rpt(n) cout << dpl[i] << " ";
    // cout << endl;
    // rpt(n) cout << dpr[i] << " ";
    // cout << endl;
    // int x;
    // rpt(n) {
    //     x = a[i];
    //     printf("%d ", x);
    // };
    rpt(n) cout << a[i] << " ";

}