#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

const int mxn = 5e5 + 10;
string a[mxn];
pair<int, int> cut[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    rpt(n) cin >> a[i];
    rpt(n-1) {
        cut[i] = {a[i].size(), 0};
        range(0, min(a[i].size(), a[i+1].size())) {
            if (a[i][j] != a[i+1][j]) {
                if ((int)a[i][j] < (int)a[i+1][j]) cut[i] = {j, 0};
                else cut[i] = {j, 1};
                break;
            }
        }
        if (cut[i].ft == a[i].size()) {
            if (a[i].size() > a[i+1].size()) cut[i] = {a[i+1].size(), 1};
        }
    }
    cut[n-1] = {a[n-1].size(), 0};

    int hand = a[n-1].size();
    for (int i = n-2; i >= 0; i--) {
        if (cut[i].ft < hand && cut[i].sd) hand = cut[i].ft;
        else if (cut[i].ft < hand) {
            cut[i].ft = a[i].size();
            hand = a[i].size();
        }
        else cut[i].ft = hand;
    }

    rpt(n) {
        range(0, cut[i].ft) cout << a[i][j];
        cout << endl;
    }
}