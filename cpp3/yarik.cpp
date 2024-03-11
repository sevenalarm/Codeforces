#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        bool parok[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                parok[0] = true;
            else
            {
                if (max(a[i], -a[i]) % 2 != max(a[i - 1], -a[i - 1]) % 2)
                    parok[i] = true;
                else
                    parok[i] = false;
            }
        }
        
        int mn = 0, mx = a[0]; // mx = -10, mn = -10

        // a = [-10 5 -8 10 6 -10 7 9 -2 -6 7 2 -4 6 -1 7 -6 -7 4 1]
        for (int i = 0; i < n; i++) // i = 1
        {
            sum += a[i]; // -3
            if (parok[i] == false)
            {
                mn = min(sum, sum - a[i]);
                if (a[i] > mx)
                    mx = a[i];
            }

            else
            {
                if (sum - mn > mx && parok[i] == true)
                {
                    mx = sum - mn; // 5
                }
                else if (a[i] > mx)
                    mx = a[i];
            }

            if (sum < mn && ((i <= n - 3 && parok[i + 2]) || i == n - 2))
            {
                mn = sum; // 
            }
        }

        cout << mx << endl;
    }
}
