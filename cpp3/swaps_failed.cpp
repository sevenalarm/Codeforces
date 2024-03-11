#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/425/A
// this code failed but it was way too long and i do not have the gut to delete it.

using namespace std;

int main() {
    int n, k, tmp, mn = 0, mni = 0, ans = 0;
    cin >> n >> k;
    int a[n];
    int l = -1, r = -1;
    

    for (int i=0; i<n; i++){
        cin >> a[i];
        ans += a[i];
    } 
    
    for (int i=0; i<n; i++) {
        if (a[i] > 0) {
            l = i;
            break;
        }
    }

    for (int i=n-1; i>=0; i--) {
        if (a[i] > 0) {
            r = i;
            break;
        }
    }

    if (r==-1) {
        int mx = -2000;
        for (int i=0; i<n; i++) {
            if (a[i] > mx) mx = a[i];
        }
        cout << mx;

    } else {
        bool done = false;
        while (k--) {

            cout << l << " " << r << endl;
            
            mn = 0, mni = 0;

            // find the minimum
            for (int i=l; i<=r; i++) {
                if (a[i] <= mn) {
                    if (a[i] == mn) {
                        int s = 0;
                        for (int j=mni+1; j<i; j++) s+= a[j];
                        cout << s << endl;
                        if (s > 0) mni = i;
                    } else mn = a[i], mni = i;
                } 
            }

            // cout << mni << endl;

            // swap left
            tmp = a[l];
            a[l] = a[mni];
            a[mni] = tmp;

            // check max
            int mnsum = 0, mxsum1, mxsum2, sum = 0;
            mxsum1 = a[l], mxsum2 = a[l];

            for (int i=l; i<=r; i++) {
                sum += a[i]; // -2
                if (sum - mnsum > mxsum1) mxsum1 = sum - mnsum; //
                if (sum < mnsum) mnsum = sum; // mnsum = -1
            }


            // reset
            tmp = a[mni];
            a[mni] = a[l];
            a[l] = tmp;


            // swap right
            tmp = a[r];
            a[r] = a[mni];
            a[mni] = tmp;

            // check max
            mnsum = 0, sum = 0;
            for (int i=l; i<=r; i++) {
                sum += a[i];
                if (sum - mnsum > mxsum2) mxsum2 = sum - mnsum;
                if (sum < mnsum) mnsum = sum;
            }

            // if maxes arent any better
            if (ans > mxsum1 && ans > mxsum2) break;
            else {
                cout << mxsum1 << " " << mxsum2 << endl;
                if (mxsum1 > mxsum2) {
                    cout << "LEFT" << endl;
                    // left was better
                    // reset
                    tmp = a[r];
                    a[r] = a[mni];
                    a[mni] = tmp;

                    //swap left instead
                    tmp = a[l];
                    a[l] = a[mni];
                    a[mni] = tmp;

                    ans = mxsum1;

                    //update l
                    int ll = l;
                    while (a[ll] < 0) {
                        ll++;
                        if (ll == r) break;
                    }
                    if (ll == r){
                        while (a[l] < a[l+1]) {
                            l++;
                            if (l == r) {
                                done = true;
                                break;
                            }
                        }
                    } else l = ll;

                } else {
                    cout << "RIGHT" << endl;
                    ans = mxsum2; // right was better

                    //update r
                    int rr = r;
                    while (a[rr] < 0) {
                        rr--;
                        if (rr == l) break;
                    }
                    if (rr == l){
                        while (a[r] > a[r-1]) {
                            r--;
                            if (l == r) {
                                done = true;
                                break;
                            }
                        }
                    } else r = rr;
                }
            }

            if (done) break;
        }

        cout << ans;
    }


    

}


// 2 2 2 5 7 9