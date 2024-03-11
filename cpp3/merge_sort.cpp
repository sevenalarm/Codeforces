#include <bits/stdc++.h>

// Finally!
// 25 Aban 1402

using namespace std;
int sz;
const int mxn = 1e5;
int a[mxn];

void merge_sort(int l, int r) // 0, 5 / 0, 2 / 0, 1 / 0, 1
{
    if (l + 1 == r)
        return;
    else
    {
        int mid = (l + r) / 2; // 2 / 1 / 0
        merge_sort(l, mid);
        merge_sort(mid, r); // 0, 1

        int p1 = l, p2 = mid, i = 0; 
        int tmp[r - l]; 

        while (i < r - l)
        {   
            if ((p2 < r && a[p1] > a[p2]) || p1 >= mid)
            {
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
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(0, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n = 0;
//     int x;
//     while (scanf("%d", &x) != EOF)
//     {
//         a[n] = x;
//         n++;
//     }

//     merge_sort(0, n - 1);
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";

//     return 0;
// }