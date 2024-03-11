#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, lg1, lg2;
    long long l, r;
    long long p, ans = 0; // ans = 32
 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r; // 38 , 63
        lg1 = log2(l); // 5
        lg2 = log2(r); // 5
 
        if (lg1 != lg2)
        {
            if (r == pow(2, lg2 + 1) - 1)
            {
                ans = pow(2, lg2 + 1) - 1;
            }
            else
            {
                ans = pow(2, lg2) - 1;
            }
        }
        else
        {
            if (r == l)
            {
                ans = l;
            }
            else
            {
                int i = lg1; // i = 5 ,
                ans = 0;
                while (lg1 == lg2)
                {
                    p = pow(2, i); // 32
                    if (l >= p)
                        ans += p;
                    l %= p;        // 6
                    r %= p;        // 31
                    lg1 = log2(l); // 2
                    lg2 = log2(r); // 4
                    i--;
                }
 
                if (r == pow(2, lg2 + 1) - 1)
                {
                    ans += r;
                }
                else
                {
                    ans += pow(2, lg2) - 1;
                }
            }
        }
 
        cout << ans << endl;
    }
}