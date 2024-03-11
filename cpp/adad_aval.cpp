#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;
    cin>>a ;
    cin>>b ;
    bool t = true ;
    if (a == 1) a ++ ;
    for ( int i = a ; i <= b ; i++){
        for(int j = 2 ; j < i ; j++){
            if(i%j == 0) t = false ;
        }
        if(t == true) cout<<i<<endl ; 
        t = true ;
    }
 
}