#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

ll mxv, mxh, mxd, mxd2;
int a[20][20];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    rpt(20) {
        range(0, 20) cin >> a[i][j];
    }


    // h
    rpt(17) {
        range(0, 17) {
            if (a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3] > mxh)
                mxh = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
        }
    }
    
    // v
    rpt(17) {
        range(0, 17) {
            if (a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j] > mxv)
                mxv = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
        }
    }

    // d
    rpt(17) {
        range(0, 17) {
            if (a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3] > mxd)
                mxd = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
        }
    }

    // d
    rpt(17) {
        range(3, 20) {
            if (a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3] > mxd2)
                mxd2 = a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3];
        }
    }
    cout << mxh << " " << mxv << " " << mxd << " " << mxd2;
    // cout << max(mxd, max(mxv, mxh));
    
}