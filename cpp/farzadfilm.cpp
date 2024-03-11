#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<string> v ;
    for (int i = 0 ; i<n ; i++) {
        string str;
        getline(cin, str);
        char a[str.length() + 1];
        strcpy(a, str.c_str()); 

        a[0] = toupper(a[0]) ;
        for(int i = 1 ; i<1000-1 ; i++){
            if (a[i] == ' ' && a[i+1] == ' ') break;
            if (a[i] == ' ') a[i+1] = a[i+1] = toupper(a[i+1]) ;
            else if (a[i-1] != ' ') a[i] = tolower(a[i]) ;
        }
        v.push_back(a);

        }
    for (auto i:v) {
        for (auto j:i) cout << j;
        cout <<endl;
    }
    return 0;
}