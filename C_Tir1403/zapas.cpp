#include <bits/stdc++.h>
#define F first 
#define S second 
#define ll long long
using namespace std;
const int MAXN = 2e5 + 6;
/*
2
5
10 20 30 20 10
7
1 4 1 3 2 1 3
*/
int h[MAXN];
bool w(int k, int n){
    int q = h[0] - k;
    bool x = 0;
    for (int i = 1; i < n; i ++){
        // if (k == 0 && n == 7) cout << i << ' ' << q << ' ';
        if (!x){
            if (abs(q - h[i]) <= k) continue;
            else{
                if (h[i] < q) q = h[i] + k, x = 1;
                else q = h[i] - k;
            }
        }
        else{
            if (abs(q - h[i]) <= k) continue;
            else{
                if (h[i] < q) q = h[i] + k;
                else return 0;
            }
        }
    }
    // if (k == 0 && n == 7) cout << "fokgokfogk";
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;   
        for (int i = 0; i < n; i ++)
            cin >> h[i];
        int l = -1, r = 1e9, mid = (r + l) / 2;
        while (r - l > 1){
            if (w(mid, n)){
                r = mid;
                mid = (r + l) / 2;
            }
            else{
                l = mid;
                mid = (r + l) / 2;
            }
        }
        cout << r << endl;
    }
}







// ll C[MAXN];
// int main(){
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[n], c[m];
//     vector <pair<int, int>> v;
//     pair <int, int> p[n];
//     for (int i = 0; i < n; i ++)
//         cin >> a[i];
//     for (int i = 0; i < n; i ++)
//         cin >> b[i];
//     for (int i = 0; i < m; i ++)
//         cin >> c[i];
//     for (int i = 0; i < n; i ++)
//         p[i] = {a[i] - b[i], a[i]};
//     sort(p, p + n);
//     v.push_back(p[0]);
//     for (int i = 1; i < n; i ++){
//         if (p[i].S < v[v.size() - 1].S)
//             v.push_back(p[i]);
//     }
//     for (int i = v.size() - 2; i >= 0; i --){
//         for (int j = v[i + 1].S; j < v[i].S; j ++){
//             C[j] = ((j - v[i + 1].S) / v[i + 1].F) * 2 + 2;
//             C[j] += 
//         }
//     }
// }