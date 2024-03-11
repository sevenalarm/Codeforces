#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sd second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        pair<int, int> lr[n];

        for (int i = 0; i < n; i++)
            cin >> lr[i].sd >> lr[i].ft; //  sd : R / ft : L

        int l = 1, r = n + 1, mid;
        while (r - l > 1)
        {
            mid = (l + r) / 2; // 6
            int checked = 0, i = n - 1; // 0 , 8

            while (checked < mid && i >= 0)
            {
                // if (lr[i].ft < mid - checked - 1) break;

                if ((lr[i].ft >= mid - checked - 1) && // 
                    (lr[i].sd >= checked))

                    checked++; // 2

                i--; // 6
            }

            if (checked < mid)
                r = mid;
            else
                l = mid;
        }

        cout << l << endl;
    }
}