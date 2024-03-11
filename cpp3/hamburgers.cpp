#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/371/C

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cntb = 0, cntc = 0, cnts = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cntb++;
        else if (s[i] == 'S')
            cnts++;
        else
            cntc++;
    }

    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    // if (cntb == 0) nb = 0;
    // if (cnts == 0) ns = 0;
    // if (cntc == 0) nc = 0;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long pool;
    cin >> pool;

    long long l, r, mid, lazem, zer = 0;
    l = 0, r = 1e12 + 101;

    while (r - l > 1) {
        mid = (l+r) / 2;
        lazem = (max(mid * cntb - nb, zer)) * pb + (max(mid * cnts - ns, zer)) * ps + (max(mid * cntc - nc, zer)) * pc;
        if (pool >= lazem ) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << l;

}