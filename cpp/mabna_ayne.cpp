#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int a, b , c;
    cin>>a;
    cin>>b;
    cin>>c; 

    // convert to decimal
    int decimal = 0;
    int x = a;
    int n = 0;
    while (x>0){
        decimal += x%10*pow(b, n);
        x /= 10;
        n++;
    }

    // convert to (x)c
    int mab = 0;
    int x1 = decimal; 
    int n1 = 0;
    while (x1>0){
        mab = mab + x1%c*pow(10,n1);
        x1/=c;
        n1++;
    }
    // cout<<decimal<<endl; // decimal version
    // cout<<mab; // new mabna version
    int mab2 = mab ;
    int rev = 0;
    while (mab2 > 0 ){
        rev = rev*10 + mab2%10 ;
        mab2 /= 10 ;
    }
    if(mab == rev){
        cout<<"YES";
    }else cout<<"NO" ;
    
}