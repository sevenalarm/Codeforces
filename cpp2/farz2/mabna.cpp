
#include <bits/stdc++.h>

using namespace std;
long long int foo, st, k, sah;
string res_sah = "", res_ash = "", c;

int main()
{
    double num, dec, decc;
    int b, digit;
    cin >> num >> b;
    k = num;
    sah = k;
    dec = num - k;
    decc = dec;

    while (k > 0)
    {
        if (k % b > 9)
        {
            c = k % b + 'A' - 10;
        }
        else
            c = to_string(k % b);

        res_sah = c + res_sah;
        k /= b;
    }

    for (int i = 0; i < 20; i++)
    {
        dec *= b;
        if (dec > 0)
            digit = dec;
        else
            digit = 0;

        res_ash += to_string(digit);
        dec -= digit;
    }

    cout << "Bakhsh Sahih: " << sah << " " << res_sah << endl;
    cout << "Bakhsh Aashari: " << decc << " " << res_ash << endl;

    // az chap

    // st = solve(k, b); // 3
    // for (int i=st; i>=0; i--) {
    //     foo = pow(b, i); // 8
    //     res += k / foo; // 1
    //     res *= 10; // 10
    //     k = k % foo; // k = 4
    // }
    // res /= 10;
}
