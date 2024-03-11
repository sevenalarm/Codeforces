#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second

bool check(string s) {
    int cnt = 0;
    rpt(s.size()) {
        if (s[i] == '(') cnt++;
        else cnt--;
        if (cnt < 0) return false;
    }
    if (cnt == 0) return true;
    else return false;
}

string generate(int x, int n) {
    string s;
    rpt(n) {
        if (x % 2 == 0) s = '(' + s;
        else s = ')' + s;
        x /= 2;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    ll kol = pow(2, n);
    string res;
    rpt(kol) {
        res = generate(i, n);
        if (check(res)) cout << res << endl;
    }
}