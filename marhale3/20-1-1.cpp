#include <bits/stdc++.h>
#define F first 
#define S second 
#define ll long long
using namespace std;
const int MAXN = 2e5 + 5;
int delta = 10739;
bool mark[MAXN];
int x = 0;
void prime(int n){
	mark[0] = 1;
	mark[1] = 1;
	for (int i = 2; i <= n; i ++){
		if (mark[i] == 1) continue;
		for (int j = 2 * i; j <= n; j += i){
			mark[j] = 1;
		}
	}
}
int main(){
    prime(1389);
    string t = "";
    for (int i = 221; i < 1389; i ++) t += '1';
    for (int i = 0; i < 221; i ++) t += '0';
    string s = "";
    int y = 0;
    for (int i = 1; i <= 1389; i ++){
        if (mark[i]) s += '1';
        else s += '0';
    }
    x = 0;
    while (s != t){
        x ++;
        string k = "";
        int i = 0;
        while (i < 1388){
            if (s[i] == '0' && s[i + 1] == '1'){
                // k += s[i + 1], k += s[i];
                swap(s[i], s[i+1]);
                i ++;
            }
            i++;
            // else{
            //     // k += s[i];
            //     // if (i == 1387) k += s[i + 1];
            // }
        }
        // s = k;
    }
    cout << s << endl << (x + (x * x) % delta + (x * x * x) % delta) % delta;
} 