#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 2e5 + 10;
pair<int, int> a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, p1, p2, y, p3, p4, z;
    cin >> n >> z;
    rpt(n) {
        cin >> a[i].ft;
        a[i].sd = i;
    }
    sort(a, a+n);
    p4 = -1;
    p3 = -1;
    range(0, n) {
        y = z - a[j].ft;
        fori(j+1, n) {
            x = y - a[i].ft;
            p1 = 0, p2 = n-1;
            while (p1 < p2) {
                if (a[p1].ft + a[p2].ft == x && p1 != i && p2 != i && p1 != j && p2 != j) break;
                else if (a[p1].ft + a[p2].ft < x) p1++;
                else p2 --;
            }
            if (p1 != p2) {
                p3 = i;
                break;
            }
        }
        if (p3 != -1) {
            p4 = j;
            break;
        }
    }
    if (p3 != -1 &&  p4 != -1) cout << a[p1].sd + 1 << " " << a[p2].sd + 1 << " " << a[p3].sd + 1 << " " << a[p4].sd + 1;
    else cout << "IMPOSSIBLE";
}

