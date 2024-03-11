#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int i=(a); i<(b); i++)

int ind = 0;
int N;
const int mxn = 2e6 + 10;
char arr[mxn];

void chap(int n) {
    if (n == 0) {
        cout << arr << endl;
        return ;
    }

    arr[ind++] = 'a';
    chap(n-1);
    ind--;

    arr[ind++] = 'b';
    chap(n-1);
    ind--;

    arr[ind++] = 'c';
    chap(n-1);
    ind--;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int n;
    // cin >> n;
    // ll size = pow(3, n);  // 9
    // // chap(n);

    // string a[size]; // 9
    // ll mod;
    // rpt(n) { // 0
    //     mod = pow(3, n-i-1); // 3
    //     for (int j = 0; j < size; j++) { // 0
    //         a[j] += ('a' + (j / mod)%3);
    //     }
    // }

    // rpt(size) cout << a[i] << endl;
    int n, x;
    cin >> n >> x;
    x--;
    string ans;
    while (n--) {
        ans = (char)('a' + x%3) + ans;
        x /= 3;
    }
    cout << ans;

}