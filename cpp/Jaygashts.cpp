#include <bits/stdc++.h>
#include <string.h>

using namespace std;


bool find_jayg(int n, auto prev, int item=1){
    if (item <= n){
        vector<string> new_set;
        for (auto permu:prev){
            for (int jay=0; jay<item; jay++){
                string new_permu = permu.substr(0, jay) + to_string(item) + permu.substr(jay, item-1-jay);
                new_set.push_back(new_permu);
                if (item==n) cout << new_permu << endl;
            }
        }
        find_jayg(n, new_set, item+1);
    } else return 0;
}


int main() {
    int n;
    cin >> n;
    vector<string> base = {""};
    find_jayg(n , base);
    // vector<string> jaygashts = find_jayg(n, base);
    // for (auto s:jaygashts) cout << s << endl;
}