#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int col[n], val[n];
    map<char, int> mp;
    mp['R'] = 0;
    mp['G'] = 1;
    mp['B'] = 2;
    mp['Y'] = 3;
    mp['W'] = 4;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        col[i] = mp[s[0]];
        val[i] = ((int)(s[1] - '0')) - 1;
    }

    // for (int i = 0; i < n; i++)
    //     cout << col[i] << val[i] << " ";
    // cout << endl;

    int hints = 1023, ans = 10, h; // 
    while (hints >= 0)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++) 
            {

                bool difcol, difval, bitcoli, bitcolj, bitvali, bitvalj;
                difcol = col[i] != col[j]; // t
                difval = val[i] != val[j]; // f
                bitcoli = hints & (1 << (5 + col[i])); // 0
                bitcolj = hints & (1 << (5 + col[j])); // 0
                bitvali = hints & (1 << val[i]); // 0
                bitvalj = hints & (1 << val[j]); // 0

                if (difcol && difval) {
                    ok &= ((bitcoli || bitcolj) || (bitvali || bitvalj));

                } else if (difcol) {
                    ok &= bitcoli || bitcolj;
                     
                } else if (difval) 
                    ok &= bitvali || bitvalj;

                // bitset<10> b(hints);
                // if (hints == 2) cout << b << ": " << difcol << difval << bitcoli << bitcolj << bitvali << bitvalj << endl;
                // if (!ok) break;
            }
        }

        if (ok)
        {
            int cnt = 0;
            for (int i = 0; i < 10; i++)
            {
                if ((hints >> i) % 2 == 1)
                    cnt++;
            }

            if (cnt < ans)
                ans = cnt;
                // h = hints;   
        }

        hints--;
    }

    cout << ans << endl;
    // cout << h << ": ";
    // bitset<10> b(h);
    // cout << b;
    
}


