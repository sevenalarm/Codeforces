#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    long long x;
    int mn;
    cin >> t;
    while(t--){

        cin >> n;
        if (n==1) {
            cin >> x;
            cout << "YES" << endl;

        } else {
            int arr[n];
            int y = n;
            while (y--) {
                cin >> x;
                if (i==0) arr[i] = x;
                else if (x != arr[i-1]) arr[i] = x;
                else n--;
            }

            int cnt = 0;

            for (int i=0; i < n; i++) {
                cout << arr[i] << " ";
                if ( (i==0 || arr[i] < arr[i-1]) && (i==n-1 || arr[i] < arr[i+1]) ) 
                    cnt++;
            }
            

            if (cnt == 1) cout << "YES";
            else cout << "NO";
            cout << endl;
            
        }













        // int valstart=0, b4=0;
        // cin >> n;
        // long long arr[n];
        // long long sum = 0;
        // string isval = "";

        // if (n==1) {
        //     cin >> valstart;
        //     cout << "YES" << endl;

        // } else {

        //     string isval = "";
        //     int valstart=0, b4=0;

        //     for (int i=0; i<n; i++) {
        //         cin >> arr[i];
        //         sum += arr[i];
        //         if (i==0) {
        //             valstart = arr[i];
        //         }
        //         else {
        //             if (arr[i] > valstart && valstart != -1) {
        //                 if (isval == "") {
        //                     isval = "YES";
        //                     valstart = -1;
        //                     b4 = arr[i];
        //                 }
        //                 else isval = "NO";

        //             } else if ((valstart != -1 && arr[i] < valstart ) || arr[i] < b4) {
        //                 valstart = arr[i];
        //             }
        //         }
        //     }   

        //     if (valstart != -1) isval = "NO";
        //     if (sum == n*arr[0]) isval = "YES";
        //     // cout << sum << " " << arr[0] * n << endl;

        //     cout << isval << endl;
        // }
        

    }
}