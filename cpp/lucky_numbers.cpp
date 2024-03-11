
#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    int luck = 0;
    for (auto c : s){
        if (c=='4' || c=='7') luck++;
    }
    string s2 = to_string(luck);
    // cout << s2;
    string nearly = "YES";
    for (int i=0; i<s2.size(); i++){
        if (s2[i] != '4' && s2[i] != '7'){
            nearly = "NO";
        } 
    }
    cout << nearly;
    

}