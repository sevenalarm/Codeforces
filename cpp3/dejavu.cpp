#include <bits/stdc++.h>

using namespace std;

int t, n, q, l, r, mid, cnt, mx, tmp, sum;
long long p;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> q; 
        int a[n], lg[n];
        long long ps[q];

        for (int i = 0; i < n; i++)
        { 
            cin >> a[i];
            l = 0, r = 31;
            while (r - l > 1)
            {
                mid = (l + r) / 2;
                p = pow(2, mid);
                if (a[i] % p == 0)
                    l = mid;
                else
                    r = mid;
            }
            lg[i] = l;
        }

        cnt = 0, mx = 31, sum = 0;

        for (int i = 0; i < q; i++)
        {               
            cin >> tmp; 
            if (tmp < mx)
            {
                ps[cnt] = pow(2, tmp);
                cnt++;   
                mx = tmp; 
            }
        }

        sort(ps, ps + cnt);

        for (int i = 1; i < cnt; i++)
            ps[i] = ps[i - 1] + ps[i];

        // for (int i:lg) cout << i << " " ;
        // cout << endl;
        // cout << cnt << endl;
        // for (int i = 0; i<cnt; i++) cout << ps[i] << " " ;
        // cout << endl << endl;

        for (int i = 0; i < n; i++)
        {
            p = pow(2, lg[i]); // 4
            if (p >= ps[0])
            {
                l = 0, r = cnt;
                while (r - l > 1)
                {
                    mid = (r + l) / 2;
                    if (ps[mid] - ps[mid - 1] <= p)
                        l = mid;
                    else
                        r = mid;
                }
                a[i] += ps[l] / 2;
                // cout << ps[l] << " ";
                // cout << ps[l] / 2 << endl;
            }
        }

        for (int i : a)
            cout << i << " ";
        cout << endl;
    }
}