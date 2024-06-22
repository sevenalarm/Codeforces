#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

map <int, int> x, y, z;
int s, side, cnt;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> x[1] >> x[2] >> y[1] >> y[2] >> z[1] >> z[2];
    s = x[1] * x[2] + y[1] * y[2] + z[1] * z[2];
    side = sqrt(s);
    if (side * side == s) {
        x[3] = (int)'A', y[3] = (int)'B', z[3] = (int)'C';
        x[4] = x[1] + x[2], y[4] = y[1] + y[2], z[4] = z[1] + z[2];
        for (auto a : {x, y, z}) {
            for (auto b : {x, y, z}) {
                for (auto c : {x, y, z}) {
                    if (a != b && b != c && a != c) {
                        for (int a1 : {a[1], a[2]}) {
                            for (int b1 : {b[1], b[2]}) {
                                for (int c1 : {c[1], c[2]}) {
                                    int a2 = a[4] - a1;
                                    int b2 = b[4] - b1;
                                    int c2 = c[4] - c1;
                                    cnt ++;
                                    // cout << cnt << " " << a1 << " " << a2 << " " << b1 << " " << b2 << " " << c1 << " " << c2 << endl;
                                    if (a1 == b1 && b1 == c1 && c1 == side && a2 + b2 + c2 == side) {
                                        cout << side << endl;
                                        rpt(a2) {
                                            range(0, side) cout << (char)a[3];
                                            cout << endl;
                                        }
                                        rpt(b2) {
                                            range(0, side) cout << (char)b[3];
                                            cout << endl;
                                        }
                                        rpt(c2) {
                                            range(0, side) cout << (char)c[3];
                                            cout << endl;
                                        }
                                        return 0;
                                    }

                                    if (a1 == side && a2 + b2 == side && b2 == c2 && b1 + c1 == side) {
                                        cout << side << endl;
                                        rpt(a2) {
                                            range(0, side) cout << (char)a[3];
                                            cout << endl;
                                        }
                                        rpt(b2) {
                                            range(0, b1) cout << (char)b[3];
                                            range(0, c1) cout << (char)c[3];
                                            cout << endl;
                                        }
                                        return 0;
                                    }
                                }
                            }
                        }
                    } 
                }
            }
        }
    }
    cout << "-1";
}