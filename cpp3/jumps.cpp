#include <bits/stdc++.h>

using namespace std;
const int mxn = 2e9;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }

        long long l, r, mid, curl, curr;
        l = -1, r = mxn;
        while (r - l > 1)
        {
            mid = (l + r) / 2;
            curl = 0, curr = 0;
            bool poss = true;
            for (int i = 0; i < n; i++)
            {
                if (curr <= a[i][0])
                {
                    if (a[i][0] - curr <= mid)
                    {
                        curl = a[i][0];
                        curr = min(curr + mid, a[i][1]);
                    }
                    else
                    {
                        poss = false;
                        break;
                    }
                }

                else
                {
                    if (a[i][1] <= curl) {
                        if (curl - a[i][1] <= mid) {
                            curl = max(curl - mid, a[i][0]);
                            curr = a[i][1];
                        } else {
                            poss = false;
                            break;
                        }

                    } else {
                        if (curl <= a[i][0]) {
                            curl = a[i][0];
                            curr = min(curr + mid, a[i][1]);

                        } else if (curr <= a[i][1]) {
                            curl = max(curl - mid, a[i][0]);
                            curr = min(curr + mid, a[i][1]);

                        } else {
                            curl = max(curl - mid, a[i][0]);
                            curr = a[i][1];
                        }
                    }
                }
            }

            if (poss) r = mid;
            else l = mid;
        }

        cout << r << endl;
    }
}