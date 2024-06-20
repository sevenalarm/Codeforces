#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)
 
const int mxn = 1e5 + 10;
pair<double, double> a[mxn];
set<pair<double, int>> d;
 
double D(pair<double, double> x, pair<double, double> y) {
    return sqrt((x.ft - y.ft) * (x.ft - y.ft) + (x.sd - y.sd) * (x.sd - y.sd));
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, j, k;
    cin >> n;
    rpt(n) cin >> a[i].ft >> a[i].sd;
    double m;
    fori(1, n) d.insert({D(a[0], a[i]), i});
    j = (*d.begin()).sd;
    m = (a[0].sd - a[j].sd) / (a[0].ft - a[j].ft);
    auto it = d.begin();
    while ((a[0].sd - a[(*it).sd].sd) / (a[0].ft - a[(*it).sd].ft) == m) it++;
    k = (*it).sd;
    cout << 1 << " " << j+1 << " " << k+1 << endl;
}
