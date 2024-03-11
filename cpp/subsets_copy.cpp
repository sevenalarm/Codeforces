#include <bits/stdc++.h>
#include <string.h>
// Prints out all the subsets of the numbers from 1 to n

using namespace std;



void print_subset(auto subset) {
    int sbt_size = subset.size();
    cout << "{" ;
    for (int a=0; a<sbt_size; a++){
        if (a+1 == sbt_size) cout<<subset[a];
        else cout << subset[a] << ", ";
    }
    cout << "}" <<endl;
}



int main() {
    int n;
    cin >> n;
    vector<int> set;
    for (int i=1; i<=n; i++) set.push_back(i);
    
    vector<vector<int>> ref; //the last group of subsets generated with size of r, used to generate the next group (with size r+1)
    vector<vector<int>> hand; //used to temporarily store the newly generated subsets, then replaces ref

    for (int i:set) ref.push_back(vector<int>{i}); //all subsets with the size of 1

    //generate all of the subsets
    cout<<"{}"<<endl;
    for (int i=0; i<n; i++){
        
        for (int j=0; j<ref.size(); j++){

            print_subset(ref[j]);
            
            //generating the next group of subsets
            int ilast = ref[j].back();
            for (int item=ilast; item<n; item++){
                auto child = ref[j];
                child.push_back(set[item]);
                hand.push_back(child);
            }
        }
        ref = hand;
        hand.clear();
    }
    return 0;
}