#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

const int mxn = 1e6 + 100;
int mark[mxn];

void garbal() {
    mark[0] = 1;
    mark[1] = 1;
    range(2, mxn) {
        if (!mark[i]) {
            for (int j = i * 2; j < mxn; j += i) {
                mark[j] = 1;
            }
        }
    }
}

bool isPrime(int n) {
    rpt(min(mxn, n)) {
        if (!mark[i]) {
            if (n % i == 0) return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n; 
    garbal();  
    // if (isPrime(n)) cout << "YES";
    // else cout << "NO";
    if (isPrime(n)) cout << 1;
    else if (n % 2 == 0) cout << 2;
    else if (isPrime(n - 2)) cout << 2;
    else cout << 3;
}