#include "Sets.h"
#include <iostream>

void Sets::addElement(int value) {
    if (value > 0) {
        elements.push_back(value);
    }
}

int Sets::getElement(int index) const {
    if (index < 0 || index >= static_cast<int>(elements.size())) {
        return -1;
    }
    return elements[index];
}

int Sets::getSize() const {
    return static_cast<int>(elements.size());
}

bool Sets::isSubset(const Sets& other) const {
    std::vector<int> temp = other.elements;
    for (int x : elements) {
        auto it = std::find(temp.begin(), temp.end(), x);
        if (it == temp.end()) {
            return false;
        }
        temp.erase(it);
    }
    return true;
}

bool Sets::isProper(const Sets& other) const {
    return isSubset(other) && (other.getSize() > getSize());
}

void Sets::printOrderedPairs(const Sets& other) const {
    for (int a : elements) {
        for (int b : other.elements) {
            std::cout << "(" << a << ", " << b << ")\n";
        }
    }
}
