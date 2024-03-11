#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string harf[n], res[n];
    for (int i=0; i<n; i++){
        cin >> harf[i];
        res[i] = "";
    }
    
    int t_count = 0;
    vector<int> base_truth_indexes;
    string base_statement;
    string trytf[n];
    bool success;
    for (int i=0; i<n; i++){ //i=0
        base_statement = "+" + to_string(i+1);
        success = true;
        t_count = 0;
        base_truth_indexes.clear();

        for (int j=0; j<n; j++){ //j=2
            // cout << harf[j] << " ";
            if (n-j<m-t_count) break;

            if (harf[j] == base_statement || //if +i
            ((harf[j][0] == '-') && (stoi(harf[j].substr(1)) != i+1))){ //or -x


                if (harf[j] == base_statement) {
                    base_truth_indexes.push_back(j);
                }
                //its the truth
                if (t_count < m) { 

                    //we can have more truths
                    t_count++; //=2
                    trytf[j] = "t";

                } else {
                    //truth cant be counted, so it must be a lie
                    for (int x=0;x<base_truth_indexes.size(); x++) res[base_truth_indexes[x]] = "F"; //set the base statements to be hard Lies
                    success = false;
                    break;
                }
            } else {
                //its a lie
                trytf[j] = "f";
            }  
            // cout << endl;
        }

        if (success && (t_count == m)) {
            for (int j=0; j<n; j++){
                if (res[j] != "F" && res[j] != "nd"){
                    if (res[j] == "") res[j] = trytf[j];
                    else if (res[j] != trytf[j]) res[j] = "nd";
                }
            }
        }
    }

    for (int i=0; i<n; i++){
        if (res[i] == "t") cout << "Truth" << endl;
        else if (res[i] == "f" || res[i] == "F") cout << "Lie" << endl;
        else cout << "Not defined" << endl;
    }
}

//time limit ://///
