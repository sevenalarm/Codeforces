#include <iostream>
#include <sstream>

int main() {
    const int rows = 4;
    const int cols = 4;
    int a[rows][cols];

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

    // Printing the matrix for verification
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
