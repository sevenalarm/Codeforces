#include <bits/stdc++.h>
#include <string.h>
#include <string>

// Issue: works fine appearently, drops the "signed integer overflow" error in cf


using namespace std;


int func(int n){
    int arr[n];
    int num, count = 0;
    while (cin >> num) {
        arr[count] = num;
        count++;
        if (count >= n) break;
    }

    int i = n-1;
    long long int cost = 0;
    while (i>0){
        if (arr[i] < arr[i-1]){
            long long int jump = arr[i-1] - arr[i];
            cost += jump;
        }
        i--;
    }
    return cost;
    
}


int main() {
    int t, nn, new_ans;
    vector<int> ans;
    cin >> t;
    for (int te=0; te<t; te++){
        cin >> nn;
        new_ans = func(nn);
        ans.push_back(new_ans);
    }
    for (int a:ans) cout << a << endl;
}