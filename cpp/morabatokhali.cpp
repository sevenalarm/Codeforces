#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;
    cin>>a;
    cin>>b;
    if(b >= a) cout<<"Wrong order!"<<endl;
    else if ((a - b) % 2 != 0) cout<<"Wrong difference!"<<endl;
    else {
        int dif = (a-b) / 2;

        for(int i = 1 ; i <= dif ; i++){
            for(int j = 1 ; j <= a ; j ++){
                cout<<"* " ;
            } 
            cout<<endl; 
        }
        for (int i = 0; i<b; i++){
            for( int j=0; j<dif; j++){
                cout<<"* ";
            }
            for ( int j=0; j<b; j++){
                cout<<"  ";
            }
            for( int j=0; j<dif; j++){
                cout<<"* ";
            }cout<<endl;
        }
        for(int i = 1 ; i <= dif ; i++){
            for(int j = 1 ; j <= a ; j ++){
                cout<<"* " ;
            } 
            cout<<endl; 
    }
}
}