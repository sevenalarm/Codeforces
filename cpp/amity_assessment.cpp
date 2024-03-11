#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string bes[4];
    string els[4];
    string row;

    //taking the input 
    cin >> row;
    bes[0] = row[0];
    bes[1] = row[1];
    cin >> row;
    bes[2] = row[0];
    bes[3] = row[1];

    cin >> row;
    els[0] = row[0];
    els[1] = row[1];
    cin >> row;
    els[2] = row[0];
    els[3] = row[1];

    //check
    string order="";
    int i = 0;
    string letter = "A";
    while (true){
        if (bes[i] == letter) order+=bes[i]
    }

}