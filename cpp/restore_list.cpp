#include <iostream>
#include <vector>


using namespace std;

int main() {

    int t, n;
    cin >> t;
    vector<vector<int>> all_res(t);

    for (int i=0; i<t; i++){
        cin >> n;
        int prev, curr, nfa=1;

        if (n==2) {
            all_res[i].push_back(0);
            cin >> curr;
            all_res[i].push_back(curr);
            nfa = 2;

        } else {
            for (int j=0; j<n-1; j++){
                cin >> curr;
                
                if (j > 0) {

                    if (prev <= curr) {
                        if (j==1) all_res[i].push_back(0);
                        all_res[i].push_back(prev);
                        nfa = 1;
                        
                    } else {
                        if (j==1) all_res[i].push_back(prev); 
                        all_res[i].push_back(curr);
                        nfa = 0;
                    }
                }
                prev = curr;
            
            }

        }
        if (nfa == 0) all_res[i].push_back(0);
        else if (nfa == 1) all_res[i].push_back(curr);
    }
    for (int i=0; i<t; i++){
        // cout << i << ". ";
        for (int j=0; j<all_res[i].size(); j++){
            if (j+1 == all_res[i].size()) cout << all_res[i][j];
            else cout << all_res[i][j] << " ";
        }
        cout << endl;
    }


}
