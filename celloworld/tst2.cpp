#include <iostream>
#include <sstream>
#include <string>
int arr[199];
#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
using namespace std;
int main() {
    int n = 0;
    int x;
    while (cin >> x) cin >> arr[++n];
    rpt(n) cout << arr[i] << ' ';
}
