
#include <iostream>
#include <algorithm> // for std::gcd

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // Failure to reduce
    }
    int gcd = std::gcd(num, denom);
    num /= gcd;
    denom /= gcd;
    return 1; // Success
}

int main() {
    int num = 8, denom = 12;
    if (reduce(num, denom)) {
        std::cout << "Reduced fraction: " << num << "/" << denom << std::endl;
    } else {
        std::cout << "Failed to reduce the fraction." << std::endl;
    }
    return 0;
}
