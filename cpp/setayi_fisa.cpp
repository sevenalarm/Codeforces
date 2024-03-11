#include <bits/stdc++.h>
using namespace std;

int main(){
    int m ;
    cin>>m ;
    bool poss = false ;
    for(int i = 3 ; i< m/3 ; i++){
        if (poss==false){
            for(int j = i ; j < m/2 ; j++){
                if (poss==false){
                    for(int x = j ; x < m/2 ; x++){
                        if (poss==false){
                            if (i*i + j*j == x*x){
                                if (i+j+x == m) {
                                    cout<<i<<" "<<j<<" "<<x;
                                    poss = true;
                                    break;
                                }
                            }
                        } else break;
                }
            } else break;
        }
    } else break;
}
    if(poss == false) cout<<"Impossible";
}