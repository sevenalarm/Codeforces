#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    char m;
    cin >> n;
    char key[n];
    for (int i=0; i<n; i++) cin >> key[i];
    cin >> k;
    int grades[k];
    for (int i=0; i<k; i++){ // people
        int grade = 0;
        for (int j=0; j<n; j++){ // questions

            string state = "nzd";
            for (int x=0; x<4; x++){ // answers

                cin >> m;
                if (m =='#') {
                    if ((x==0 && key[j] == 'A') || (x==1 && key[j] == 'B') || (x==2 && key[j] == 'C') || (x==3 && key[j] == 'D')){
                        if (state == "nzd") state = "t";
                        else state = "f"; 
                    } else state = "f";
                }
            }
            
            if (state == "f") grade--;
            else if (state == "t") grade += 3;

        }

        grades[i] = grade;
    }

    for (int i:grades) cout << i << endl;
}

// ACCEPTED
// https://quera.org/problemset/148640/submissions/
