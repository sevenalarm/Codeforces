#include <bits/stdc++.h>
#include <string.h>
// Prints out all the subsets of a given set

using namespace std;

int main() {
    vector<int> set;

    //taking the input set
    string line;
    getline(cin, line);
    istringstream os(line);
    int foo;
    while (os >> foo) set.push_back(foo);

    // for (auto v:set) cout<<v<<" ";
    // cout<<endl;
    
    //base variables
    int n = set.size();
    int h = (int)(n+1)/2; //(bigger)half of the set size, to be used later in optimization
    map<int, int> indexes;
    for (int i=0; i<n; i++) indexes[set[i]] = i; //each key points to the index of the key in the original set!

    vector<vector<int>> half; //to store half of the subsets and use them to generate the rest (not implemented yet)
    vector<vector<int>> ref; //the last group of subsets generated with size of r, used to generate the next group (with size r+1)
    vector<vector<int>> hand; //used to temporarily store the newly generated subsets, then replaces ref

    //initiallize ref
    for (int i:set) ref.push_back(vector<int>{i}); //subsets with the size of 1

    //generate all of the subsets
    for (int i=0; i<n; i++){
        
        for (int j=0; j<ref.size(); j++){
            // half.push_back(ref[j]); 
            for (int num:ref[j]) cout << num << " ";
            cout << endl;
            
            int ilast = indexes[ref[j].back()];
            for (int item=ilast+1; item<n; item++){
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