#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i = 0; i < (a); i++)
#define range(a, b) for (int i = (a); i < (b); i++)

int k, zesht = 1e9 + 7, i = 0, n;

// int cnt_valid(string s, int l, int r, int n)
// {
//     if (l + r == 2 * n + k && l - r < k) 
//         return 0;

//     if (l - k == n) {
//         // i++;
//         // cout << i << " ";
//         // cout << s;
//         // rpt(l - r) cout << ')';
//         // cout << endl;
//         return 1;
//     }
//     int ans = 0;
//     if (l == r || l < k)
//     {   
//         ans += cnt_valid(s + '(', l + 1, r, n);
//         ans %= zesht;
//     }
//     else
//     {
//         ans += cnt_valid(s + '(', l + 1, r, n);
//         ans += cnt_valid(s + ')', l, r + 1, n);
//         ans %= zesht;
//     }

//     return ans;
// }

int cnt_valid(int l, int r)
{
    if (l + r == 2 * n + k && l - r < k) 
        return 0;

    if (l - k == n) {
        return 1;
    }
    int ans = 0;
    if (l == r || l < k)
    {   
        ans += cnt_valid(l + 1, r);
        ans %= zesht;
    }
    else
    {
        ans += cnt_valid(l + 1, r);
        ans += cnt_valid(l, r + 1);
        ans %= zesht;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int res = cnt_valid(0, 0);
        cout << res << endl;
    }
}