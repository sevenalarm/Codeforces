#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 9;
int a[mxn];
int mark[mxn];
int n, elm;

void permu(int l) {
    if (l == n) {
        rpt(n) {
            elm = a[i]; 
            printf("%d ", elm);
        }
        printf("\n");
        return;
    }

    rpt(n) {
        if (!mark[i]) {
            a[l] = i+1;
            mark[i] = 1;
            permu(l + 1);
            mark[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    ll facto = 1;
    rpt(n) facto *= (i+1);
    cout << facto << endl;
    permu(0);
}