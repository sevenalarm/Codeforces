#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

// ACCEPTED, FINALLY
// This acception is a national celebration
// You had the exact same bug in like almost a YEAR ago
// In which you thought numbers are always located at s[1] 
// But as a fun fact there exist more MULTI-DIGITED NUMBERS than one digited ones.
// SO you get WA on the very SAME tc. PLEAAAAAAAASE HOSNA LEARN FROM YOUR MISTAKES
// But like, still, su - go - hess. fighting!

// First of Tir - 1403

const int mxn = 1e5 + 10;
int m, n, doosta, cnt, num;
int a[mxn][3];
string s, ss[mxn];

int main() {
    cin >> n >> m;
    rpt(n) {
        cin >> s;
        ss[i] = s;
        num = stoi(ss[i].substr(1, ss[i].size())) - 1;
        if (s[0] == '+') a[num][1]++;
        else {
            a[num][0]++;
            doosta++;
        }
    }
    cnt = 0;
    rpt(n) {
        if (a[i][1] + doosta - a[i][0] == m) {
            a[i][2] = 1;
            cnt++;
        }
    }
    rpt(n) {
        num = stoi(ss[i].substr(1, ss[i].size())) - 1;
        if (cnt > 1 && a[num][2]) cout << "Not defined" << endl;
        else if ((ss[i][0] == '+' && a[num][2]) || (ss[i][0] == '-' && !a[num][2])) cout << "Truth" << endl;
        else cout << "Lie" << endl;

    }
}
