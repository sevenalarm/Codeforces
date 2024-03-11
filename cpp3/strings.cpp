#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2; 
    cin >> s1 >> s2;
    int sz = s1.size();
    int i = 0, is1, is2;
    while (i < sz) {
        is1 = (int)s1[i], is2 = (int)s2[i];
        if (is1 <= 90) is1 += 32;
        if (is2 <= 90) is2 += 32;
        if (is1 == is2) i++;
        else break;
    }
    
    if (is1 > is2) cout << 1;
    else if (is2 > is1) cout << -1;
    else cout << 0;
}