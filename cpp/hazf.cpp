#include <bits/stdc++.h>
#include <string.h>
using namespace std;
// a little problem :)

int main() {
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
        int i=0, p=0, c=0, n;
        string s;
        cin>>n;
        vector<int> a;
        for (int x=1; x<=n; x++)
            a.push_back(x);
        cin>>s;
        int b[n];
        for (int x=0; x<n; x++)
            b[x] = (int)s[x] - 48 ; // convert str to int
    
        // int n2 = n;
        while (i < n){
            if (b[i]==0 || b[i] == 2){
                c = i+1;
                if(b[i] == 0) p += c;
                //cout<<p<<endl;
                int j = i;
                while (j+c < n){
                    if (b[j+c] == 0){
                        p += c;
                        //cout<<p<<endl;
                        // if(b[i] == 0) n2--;
                        //n2 --;
                        b[j+c] = 2;
                        j += c;
                    } 
                    else break;
                }
            }
            i++;    
        }
        // cout<<p<<endl;
        ans.push_back(p);
    }
    for (int k:ans){cout<<k<<endl;}
}