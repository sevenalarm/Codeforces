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



bool find_subsets(int n, auto prev, int item=1){
    if (n >= item){
        vector<vector<int>> new_group;
        for (auto subset:prev){
            vector<int> new_subset = subset;
            new_subset.push_back(item);
            print_subset(new_subset);
            new_group.push_back(new_subset);
        }
        prev.insert(prev.end(), new_group.begin(), new_group.end());
        find_subsets(n, prev, item+1);
    } else return 0;
}


int main() {
    int n;
    cin >> n;
    vector<int> null;
    vector<vector<int>> base{null}; 

    //generate all of the subsets
    find_subsets(n, base);
    
    // return 0;
}