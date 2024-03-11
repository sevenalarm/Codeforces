#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    string s = "1";
    if(n[0] != '1'){
        for(int i = 1 ; i<n.length() ; i++){
            s += '1';
        }
    }
    else {
        for(int i = 1 ; i<n.length() ; i++){
            if(n[i] == '0') s +='0';
            else if (n[i] == '1') s +='1';
            else {
                for (int j = 0 ; j<n.length() - i ; j++){
                    s += '1';
                }
                break;
            }
        }
    }
    
    int s2 = stoi(s);
    int s3 = 0;
    int o = 0;
    while(s2 != 0){
        s3 += s2%10 * pow(2 , o);
        s2 /= 10;
        o++;
    }
    cout<<s3;
    
}