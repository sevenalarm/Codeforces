#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n], b[n];
        a[0] = 1;
        for (int i = 1; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n);

        int pa = n - 1, pb = n - 1, ans = 0;
        while (ans <= pb) {
            if (a[pa] < b[pb]) {
                pa--;
                pb--;

            } else {
                pa--;
                ans++;
            }
        }

        cout << ans << endl;
    }
}