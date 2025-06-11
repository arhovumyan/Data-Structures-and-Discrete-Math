#ifndef SETS_H
#define SETS_H

#include <vector>

class Sets {
public:
    void addElement(int value);

    int getElement(int index) const;

    int getSize() const;

    bool isSubset(const Sets& other) const;

    bool isProper(const Sets& other) const;

    void printOrderedPairs(const Sets& other) const;

private:
    std::vector<int> elements;
};

#endif
