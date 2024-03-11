#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/425/A
// 18 aban 1402

using namespace std;

int main()
{
    int n, k, tmp, mn = 0, mni = 0, ans = 0;
    cin >> n >> k;
    int a[n];
    // int l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }

    while (k--)
    {
        // cout << "<------ K -------->" << endl;
        // swap every below zero element i with element j
        int swapi = -1, swapj = -1, mx_sum = ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j) {

                    // temporarily swap i & j
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;

                    // check the maximum
                    int mx = a[0], mn = 0, sum = 0;
                    for (int k=0; k<n; k++) {
                        sum += a[k]; // 9
                        if (sum - mn > mx) mx = sum - mn;
                        if (sum < mn) mn = sum; // mn = -1
                    }

                    // cout << i << " " << " " << j << " " << mx << endl;

                    // check if we have found a better swap
                    if (mx > ans) {
                        ans = mx;
                        swapi = i;
                        swapj = j;
                        // cout << "BETTER" << endl;
                    }

                    // reset the array
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                    
                }
            }
        }

        if (swapi == -1) break;
        else {
            // there has been a better answer
            tmp = a[swapi];
            a[swapi] = a[swapj];
            a[swapj] = tmp;
            // cout << swapi << " " << swapj << endl;
        }

        // cout << ans << endl;

    }

    cout << ans;
}
