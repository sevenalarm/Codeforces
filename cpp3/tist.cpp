#include <bits/stdc++.h>

using namespace std;

int solve( long long x, int k){
    int answer = 0;
    long long num = x;
    while (num > 1) {
        num /= 2;
        answer++;
    }
    return answer;
}

int main() {
    cout << 5 % 6;
}