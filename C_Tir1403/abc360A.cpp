#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back
#define fori(a, b) for (int i=(a); i<(b); i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<char, int> mp;
    string s;
    cin >> s;
    rpt(3) mp[s[i]] = i;
    if (mp['R'] < mp['M']) cout << "Yes";
    else cout << "No";
}