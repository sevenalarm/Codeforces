#include <bits/stdc++.h>

using namespace std;

int main() {
    int n , m;
    cin >> n >> m;
    string s[n];
    bool ok[n];
    for (int i=0; i<n; i++) {
        cin >> s[i];
        ok[i] = false;
    }

    bool expali = false, partner = false;
    string ansl = "", ansr, mid;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (!ok[i] && !ok[j]) {
                string s1 = s[i], s2 = s[j]; // oo , xo
                partner = true;
                for (int k = 0; k < m; k++) {
                    if (s1[k] != s2[m-k-1]) {
                        partner = false;
                        break;
                    }
                }

                if (partner) {
                    ansl += s1;
                    ansr = s2 + ansr;
                    ok[i] = true;
                    ok[j] = true;
                } 
            }
        }

        if (!ok[i] && !expali) {
            string s1 = s[i];
            expali = true;
            for (int k = 0; k < m/2; k++) {
                if (s1[k] != s1[m-k-1]) {
                    expali = false;
                    break;
                }
            }

            if (expali) mid = s1;
        }
    }
    int sz = ansl.size() + mid.size() + ansr.size();
    cout << sz << endl;
    cout << ansl << mid << ansr;

}