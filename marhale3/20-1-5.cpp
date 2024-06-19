#include <bits/stdc++.h>
using namespace std;

#define rpt(a) for (int i = 0; i < (a); i++)
#define range(a, b) for (int j = (a); j < (b); j++)
#define sd second

int a[6], pt[31];
int b[6][2] = {
    {7, 13},
    {7, 21},
    {7, 30},
    {13, 21},
    {13, 30},
    {21, 30}
};
double delta = 10739;
pair<double, double> c[4];

bool doesWin() {
    pt[7] = 0, pt[13] = 0, pt[21] = 0, pt[30] = 0;
    rpt(6) {
        if (a[i] != 2) 
            pt[b[i][a[i]]] += 3;
        else {
            pt[b[i][0]]++;
            pt[b[i][1]]++;
        }
    }
    c[0] = {pt[7], 4};
    c[1] = {pt[13], 3};
    c[2] = {pt[21], 2};
    c[3] = {pt[30], 1};
    sort(c, c+4);
    if (c[3].sd == 2 || c[2].sd == 2) return true;
    return false;
}

double p() {
    double ans = 1;
    double D, g; // g is the possibility of each game in the current state
    rpt(6) {
        D = (double)(50 - abs(b[i][0] - b[i][1])) / 100;
        double A = b[i][0], B = b[i][1];
        if (a[i] == 2) g = D;
        else if (a[i] == 0) g = (B * (1 - D) / (A + B)); // A wins
        else g = (A * (1 - D) / (A + B)); // B wins
        ans *= g;
    }
    return ans;
}

int main()
{
    double P = 0;
    rpt(729)
    {
        int x = i;
        int j = 0;
        while (x) {
            a[j] = x % 3;
            x /= 3;
            j++;
        }
        if (doesWin()) 
            P += p();
    }
    cout << fixed << setprecision(10) << P * delta * delta;
}
