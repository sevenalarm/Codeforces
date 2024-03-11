#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

const int mxn = 1000;
int a[mxn], tmp[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    rpt(n) cin >> a[i];
    ll mx = 0, sum = 0;
    int ind = -1;

    rpt(n) {
        range(0, n) tmp[j] = 0;
        sum = 0;
        tmp[i] = a[i];
        sum += a[i];
        range(i+1, n) {
            if (a[j] < tmp[j-1]) tmp[j] = a[j];
            else tmp[j] = tmp[j-1];
            sum += tmp[j];
        }

        for (int j = i - 1; j >= 0; j--) {
            if (a[j] < tmp[j+1]) tmp[j] = a[j];
            else tmp[j] = tmp[j+1];
            sum += tmp[j];
        }

        if (sum > mx) {
            mx = sum;
            ind = i;
        }
    }

    tmp[ind] = a[ind];
    range(ind + 1, n) {
        if (a[j] < tmp[j-1]) tmp[j] = a[j];
        else tmp[j] = tmp[j-1];
    }
    for (int j = ind - 1; j >= 0; j--) {
        if (a[j] < tmp[j+1]) tmp[j] = a[j];
        else tmp[j] = tmp[j+1];
    }

    rpt(n) cout << tmp[i] << ' ';
}