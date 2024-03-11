#include <bits/stdc++.h>
using namespace std;


int main(){
    int a , b ;
    cin>>a ;
    cin>>b ;
    bool t = true ;
    int tedad = 0 ;
    for ( int i = a+1 ; i < b ; i++){
        for(int j = 2 ; j < i ; j++){
            if(i%j == 0) t = false ;
        }
        if(t == true) tedad ++ ;
        t = true ;
    }
    int x ;
    for ( int i = a+1 ; i < b ; i++){
        for(int j = 2 ; j < i ; j++){
            if(i%j == 0) t = false ;
        }
        if(t == true){
            x++;
            if (x==tedad) cout<<i ;
            else cout<<i<<"," ; 
        }
        t = true ;
    }
}