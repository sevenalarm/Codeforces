#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    bool shirini = true;
    for (int i=0; i<s1.size(); i++){
        for (int j=0; j<s2.size(); j++){

            int start = i+j;
            if (start >= s1.size()) start %= s1.size();

            if (s1[start] != s2[j]) {
                shirini = false;
                break;
            }
        }

        if (shirini) {
            cout << "Yes";
            shirini = false;
            break;
        } else shirini = true;
    }

    if (shirini) cout << "No";
}

// ACCEPTED
// https://quera.org/problemset/18310/submissions/