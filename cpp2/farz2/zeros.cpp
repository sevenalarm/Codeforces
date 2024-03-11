#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int solve( long long x, int k){
    int answer;
    answer = log2f( x ) / log2f( k );
    return answer;
}

int main() {

    int q, cnt5;
    cin >> q;
    long long l = 0, r = q*5+1, mid;
    while (r-l > 1) {
        mid = (l + r) / 2;
        int lg = solve(mid, 5);
        cnt5 = 0;
        for (int i=lg; i>=1; i--) {
            cnt5 += mid / pow(5, i);
        }
        // cout << mid << ": " << lg << " " << cnt5 << endl;
        if (cnt5 == q) {
            l = mid;
            break;
        }
        else if (cnt5 > q) r = mid;
        else l = mid;
    }
    if (q==0) cout << 1;
    else if (l==mid && cnt5==q) cout << l - l%5;
    else cout << "No solution";
    cout << endl;

}
