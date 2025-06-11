#include <iostream>
#include <vector>

unsigned long long catalan(int n);
unsigned long long fibonacci(int n);

int main() {
    int choice;
    do {
        std::cout
            << "1. Calculate Catalan numbers\n"
               "2. Calculate Fibonacci numbers (recursively)\n"
               "0. Quit\n\n"
               "Enter selection: ";
        std::cin >> choice;

        if (choice == 1) {
            int n;
            std::cout << "Enter Catalan number to calculate: ";
            std::cin >> n;
            std::cout
                << "Catalan number at " << n
                << " is " << catalan(n)
                << "\n\n";
        }
        else if (choice == 2) {
            int n;
            std::cout << "Enter Fibonacci number to calculate: ";
            std::cin >> n;
            std::cout
                << "Fibonacci number " << n
                << " is " << fibonacci(n)
                << "\n\n";
        }
    } while (choice != 0);

    return 0;
}

unsigned long long catalan(int n) {
    std::vector<unsigned long long> C(n + 1);
    C[0] = 1;
    for (int i = 1; i <= n; ++i) {
        C[i] = 0;
        for (int j = 0; j < i; ++j) {
            C[i] += C[j] * C[i - 1 - j];
        }
    }
    return C[n];
}

unsigned long long fibonacci(int n) {
    if (n < 2) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
