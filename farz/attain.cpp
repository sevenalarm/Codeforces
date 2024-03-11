#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k, x;
    int union_[51];
    for (int i=0; i<51; i++) union_[i] = 0;

    int all_set_union_cnt = 0;

    int all_sets[50][51];
    for (int i=0; i<50; i++){
        for (int j=0; j<51; j++){
            all_sets[i][j] = 0;
        }
    }
    vector<int> arr;
    cin >> t;
    while (t--){
        cin >> n;

        for (int i=0; i<n; i++){ // create the union
            cin >> k;
            for (int j=0; j<k; j++){
                cin >> x;
                union_[x] += 1;
                all_sets[i][x] += 1;
            }
        }

        all_set_union_cnt = 0;
        for (int i=1; i<51; i++){ //
            if (union_[i] > 0) all_set_union_cnt++;
        }
        cout<<"all set union cnt:"<<all_set_union_cnt<<endl;
        int max_members = -1;
        for (int i=0; i<n; i++){
            int set_union_cnt = 0;

            for (int j=1; j<51; j++){
                all_sets[i][j] = union_[j] - all_sets[i][j];
                if (all_sets[i][j] > 0){
                    set_union_cnt += 1;
                }

            }
            cout<<set_union_cnt<<endl;
            if (set_union_cnt > max_members && set_union_cnt != all_set_union_cnt){
                max_members = set_union_cnt;
            }

            
        }
        
        cout << max_members << endl;

    }
}