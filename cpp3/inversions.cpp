#include <bits/stdc++.h>

using namespace std;
const int mxn = 200000;
int a[mxn];

long long merge_sort(int l, int r) 
{
    if (l + 1 == r)
    {
        return 0;

    }
    else
    {
        int mid = (l + r) / 2;
        long long ans = 0; 
        ans += merge_sort(l, mid);
        ans += merge_sort(mid, r); 

        int p1 = l, p2 = mid, i = 0;
        int tmp[r - l];

        while (i < r - l)
        {   
            if ((p2 < r && a[p1] > a[p2]) || p1 >= mid)
            {
                if (a[p1] > a[p2]) ans += mid - p1;
                tmp[i] = a[p2++];
            }
            else
            {
                tmp[i] = a[p1++];
            }

            i++;
        }

        for (int x = 0; x < i; x++)
            a[l + x] = tmp[x];

        return ans;
    }
}


int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        long long res = merge_sort(0, n);
        cout << res << endl;
    }
}

