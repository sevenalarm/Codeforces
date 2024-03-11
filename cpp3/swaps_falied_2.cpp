#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/425/A
// inam nemishod ensafan pak konam
// 18 aban 1402

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

            // cout << l << " " << r << endl;
            
            // swap every below zero element between l and r with l and r
            int swapi = -1, swapj = -1;
            for (int i=l; i<=r; i++) {
                if (a[i] < 0) {
                    mni = i;

                    // swap left
                    tmp = a[l];
                    a[l] = a[mni];
                    a[mni] = tmp;
                    // check max
                    int mnsum = 0, mxsum1 = a[l], mxsum2 = a[l], sum = 0;
                    mxsum1 = a[l], mxsum2 = a[l];
                    for (int i=l; i<=r; i++) {
                        sum += a[i]; 
                        if (sum - mnsum > mxsum1) mxsum1 = sum - mnsum; 
                        if (sum < mnsum) mnsum = sum; 
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
                    // reset
                    tmp = a[r];
                    a[r] = a[mni];
                    a[mni] = tmp;


                    // check if maxes are any better
                    if (ans < mxsum1 || ans < mxsum2) {

                        // cout << mxsum1 << " " << mxsum2 << endl;

                        //compare left and right
                        if (mxsum1 > mxsum2) {
                            // cout << "LEFT" << endl;
                            ans = mxsum1; // left was better
                            swapi = l, swapj = mni;

                        } else {
                            // cout << "RIGHT" << endl;
                            ans = mxsum2; // right was better
                            swapi = r, swapj = mni;
                        }

                    }


                }
            }

            if (swapi == -1) break;
            else {

                // swap with the best move
                tmp = a[swapi];
                a[swapi] = a[swapj];
                a[swapj] = tmp;

                if (swapi == l) { // l must change, bcuz a[l] < 0
                    int ll = l;
                    while (a[ll] < 0) {
                        ll++;
                        if (ll == r) break;
                    }
                    if (ll == r){
                        while (a[l] < a[l+1]) {
                            l++;
                            if (l == r) {
                                // the middle is sorted
                                done = true;
                                break;
                            }
                        }
                    } else l = ll;

                } else { // r must change, bcuz a[r] < 0
                    int rr = r;
                    while (a[rr] < 0) {
                        rr--;
                        if (rr == l) break;
                    }
                    if (rr == l){
                        while (a[r] > a[r-1]) {
                            r--;
                            if (l == r) {
                                // the middle is sorted
                                done = true;
                                break;
                            }
                        }
                    } else r = rr;
                }
            }

            // cout << mni << endl;
            if (done) break;
            
        }

        cout << ans;
    }


    

}
