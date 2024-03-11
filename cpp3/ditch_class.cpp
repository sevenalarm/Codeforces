#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tc, n, t, l, lf, ri, mid;
    long long int p, mxp1, mxp2, num, midp;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> p >> l >> t;

        mxp1 = (2 * t) + l;
        mxp2 = t + l;
        num = n / 14;
        if (n % 14 > 7) num++;

        lf = 0, ri = n;
        while (ri - lf > 1)
        {
            mid = (lf + ri) / 2;
            if (mid <= num)
            {
                midp = mid * mxp1;
            }
            else
            {
                midp = num * mxp1;
                if (n % 14 < 8 && n % 14 != 0)
                {
                    midp += mxp2;
                    if (mid > num + 1)
                    {
                        midp += (mid - num - 1) * l;
                    }
                }
                else
                {
                    midp += (mid - num) * l;
                }
            }

            if (midp < p)
                lf = mid;
            else
                ri = mid;
        }

        cout << n - ri << endl;
    }
}