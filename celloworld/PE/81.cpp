#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rpt(a) for (int i=0; i<(a); i++)
#define range(a, b) for (int j=(a); j<(b); j++)
#define ft first
#define sd second
#define pb push_back

ll dp[80][80];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;

    const int rows = 80;
    const int cols = 80;
    ll a[rows][cols];

    std::string line;
    for (int i = 0; i < rows; ++i) {
        if (!std::getline(std::cin, line)) {
            std::cerr << "Input error: Insufficient rows provided." << std::endl;
            return 1;
        }

        std::istringstream ss(line);
        std::string value;
        for (int j = 0; j < cols; ++j) {
            if (!std::getline(ss, value, ',')) {
                std::cerr << "Input error: Insufficient columns in row " << i + 1 << std::endl;
                return 1;
            }
            a[i][j] = std::stoi(value);
        }
    }

    // cout << a[0][0];

    dp[0][0] = a[0][0];
    range(1, 80) {
        dp[0][j] = dp[0][j-1] + a[0][j];
    }
    cout << endl;
    range(1, 80) {
        dp[j][0] = dp[j-1][0] + a[j][0];
    }
    
    for (int i = 1; i < 80; i++) {
        range(1, 80) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];
        }
    }
    
    cout <<  dp[79][79];
}

