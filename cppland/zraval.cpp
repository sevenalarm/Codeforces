#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool fog(int n) {
    if (n / 10 > 0) {
        int chap = n / 10;
        if (fog(chap)) {
            bool isaval = true;
            for (int i = 2; i < n; i++) {
                if (n % i == 0) isaval = false;
            }

            return isaval;

        } else return false;

    } else {
        bool isaval = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) isaval = false;
        }

        return isaval;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int mxn = 2e9;
    
}