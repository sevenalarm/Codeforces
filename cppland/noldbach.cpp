#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)

const int mxn = 2000;
int marked[mxn*2];
vector<int> primes;
int nprime[mxn*2];

void garbal() {
    marked[0] = 1;
    marked[1] = 1;
    for (int i = 2; i < 2*mxn; i++) {
        if (!marked[i]) {
            // cout << i << " ";
            for (int j = 2 * i; j < 2*mxn; j += i) {
                marked[j] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    garbal();
    rpt(mxn) {
        if (!marked[i]) 
            primes.push_back(i);
    }

    rpt(primes.size() - 1) {
        if (!marked[primes[i] + primes[i + 1] + 1]) 
            nprime[primes[i] + primes[i + 1] + 1] = 1;
    }

    // cout << primes[primes.size() - 2];
    // rpt(mxn) if (nprime[i] == 1) cout << i << " ";
    // cout << endl;
    int n, k;
    cin >> n >> k;
    int cnt = 0;

    for (int i = 2; i <= n; i++) {
        if (nprime[i]) cnt++; 
    }

    if (cnt < k) cout << "NO";
    else cout << "YES";

}