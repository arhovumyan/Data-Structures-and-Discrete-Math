#include <iostream>

int gcd(int a, int b);

int main() {
    int first, second;
    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "Enter the second number: ";
    std::cin >> second;
    if (first <= 0 || second <= 0) {
        std::cout << "Error: First number must not be zero and both numbers must be positive." << std::endl;
        return 1;
    }
    int result = gcd(first, second);
    std::cout << "The GCD of " << first << " and " << second << " is " << result << "." << std::endl;
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
