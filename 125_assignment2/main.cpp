#include "Sets.h"
#include <iostream>

int main() {
    Sets setA, setB;
    int value;

    std::cout << "Enter values for Set A (end with 0 or negative): ";
    while (std::cin >> value && value > 0) {
        setA.addElement(value);
    }

    std::cout << "Enter values for Set B (end with 0 or negative): ";
    while (std::cin >> value && value > 0) {
        setB.addElement(value);
    }

    std::cout << "\nOrdered Pairs A x B:\n";
    setA.printOrderedPairs(setB);

    std::cout << "\nSet A is a subset of Set B: "
              << (setA.isSubset(setB) ? "True" : "False") << std::endl;

    std::cout << "Set A is a proper subset of Set B: "
              << (setA.isProper(setB) ? "True" : "False") << std::endl;

    return 0;
}