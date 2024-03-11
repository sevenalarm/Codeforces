#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p1, p2;
    ll sum1 = 0, sum2 = 0, suma = 0, sumb = 0;

    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }

    cin >> m;
    int b[m + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sumb += b[i];
    }

    int ans = 0;
    if (suma != sumb)
    {
        cout << -1;
        return 0;
    }
    else
    {
        p1 = 0, p2 = 0;
        sum1 = a[p1], sum2 = b[p2]; // 11 , 11
        while (p1 < n && p2 < m)
        {
            if (sum1 == sum2)
            {
                ans++;                      // 1
                p1++, p2++;                 // 1, 1
                sum1 = a[p1], sum2 = b[p2]; // 2 , 7
            }
            else if (sum1 > sum2)
            {
                p2++;
                sum2 += b[p2];
            }
            else
            {
                p1++;          // 2
                sum1 += a[p1]; //
            }
        }
    }

    cout << ans;
}