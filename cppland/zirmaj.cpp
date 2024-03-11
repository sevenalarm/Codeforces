#include <bits/stdc++.h>
#define ll long long
using namespace std;

void subsets(int l, int r, string back, string back2, bool tohi) {

    if (tohi)
        cout << back2 << "}" << endl;

    if (l == r) {
        cout << back << r << "}" << endl;
        return;
    }

    string newb, newb2;
    newb = back + to_string(l) + ", ";
    newb2 = back + to_string(l);

    subsets(l+1, r, newb, newb2, true);
    subsets(l+1, r, back, back2, false);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    subsets(1, n, "{", "{", true); 
}

