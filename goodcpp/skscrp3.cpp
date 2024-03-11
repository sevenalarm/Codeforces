#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1313/problem/C2
 
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
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
 
    ll n;
    cin >> n;
    rpt(n) cin >> a[i];
    int pt = 0;
    pair<int, int> p;
 
    p = make_pair(a[0], 0);
    chain[0] = p;
    dpl[0] = a[0];
    range(1, n) {
        while (pt >= 0 && a[i] < chain[pt].ft) {
            pt--;
        }
        if (pt != -1) {
            dpl[i] = dpl[chain[pt].sd] + (ll)(i - chain[pt].sd) * a[i];
 
        } else dpl[i] = (ll)(i+1) * a[i];
        pt++;
        p.ft = a[i];
        p.sd = i;
        chain[pt] = p;
    }
 
    pt = 0;
    p = make_pair(a[n-1], n-1);
    chain[0] = p;
    dpr[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        while (pt >= 0 && a[i] < chain[pt].ft) {
            pt--;
        }
        if (pt != -1) {
            dpr[i] = dpr[chain[pt].sd] + (ll)(chain[pt].sd - i) * a[i];
 
        } else dpr[i] = (ll)(n - i) * a[i];
        pt++;
        p.ft = a[i];
        p.sd = i;
        chain[pt] = p;
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
    
    rpt(n) {
        printf("%d ", a[i]);
    };
 
    // rpt(n) cout << a[i] << " ";
 
}