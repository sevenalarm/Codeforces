#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    int num = stoi(s);
    int sum = 0;
    for (int i = 0; i < s.size(); i++) sum += (s[i] - '0');

    if (num % sum == 0) cout << "Yes";
    else cout << "No";
}