#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1e5 + 10;
pair<int, int> c[mxn], d[mxn];
char ltr;

int main() {
    int n, p, b, C, D, cs = 0, ds = 0;
    cin >> n >> C >> D;
    rpt(n) {
        cin >> b >> p >> ltr;
        if (ltr == 'C') {
            c[cs] = {p, b};
            cs++;
        } else {
            d[ds] = {p, b};
            ds++;
        }
    }
    sort(c, c+cs);
    sort(d, d+ds);
    int pbc[mxn], pbd[mxn], cc = 0, dd = 0, cd = 0, mxc = 0, mxd = 0;

    // CD
    rpt(cs) {
        if (c[i].ft <= C) mxc = max(mxc, c[i].sd);
        else break;
    }
    rpt(ds) {
        if (d[i].ft <= D) mxd = max(mxd, d[i].sd);
        else break;
    }
    if (mxd && mxc) cd = mxd + mxc;
    else cd = 0;
    
    mxc = 0, mxd = 0;
    // CC
    if (cs > 1) {
        pbc[0] = c[0].sd;
        range(1, cs) pbc[j] = max(pbc[j-1], c[j].sd);
        mxc = 0;
        range(1, cs) {
            if (c[j].ft <= C && (C - c[j].ft) >= c[0].ft) { // if we can buy this
                int l = 0, r = j, mid;
                while (r - l > 1) {
                    mid = (l + r) / 2;
                    if (c[mid].ft <= (C - c[j].ft)) l = mid;
                    else r = mid;
                }
                if (mxc < c[j].sd + pbc[l]) mxc = c[j].sd + pbc[l];
            } 
        } 
    }
    cc = mxc;

    // DD
    if (ds > 1) {
        pbd[0] = d[0].sd;
        range(1, ds) pbd[j] = max(pbd[j-1], d[j].sd);
        mxd = 0;
        range(1, ds) {
            if (d[j].ft <= D && (D - d[j].ft) >= d[0].ft) {
                int l = 0, r = j, mid;
                while (r - l > 1) {
                    mid = (l + r) / 2;
                    if (d[mid].ft <= (D - d[j].ft)) l = mid;
                    else r = mid;
                }
                if (mxd < d[j].sd + pbd[l]) mxd = d[j].sd + pbd[l];
            } 
        } 
    }
    dd = mxd;   

    // cout << cd << " " << cc << " " << dd;
    cout << max(cc, (max(cd, dd)));
}