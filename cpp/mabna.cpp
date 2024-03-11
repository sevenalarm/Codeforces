#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int mab = 0;
    int x = a; 
    int n = 0;
    while (x>0){
        mab = mab + x%b*pow(10,n);
        x = x/b;
        n++;
    }
    cout<<mab;
    
}