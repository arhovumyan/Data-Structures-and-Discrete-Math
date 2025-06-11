#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal {
private:
    double _maneLength;

public:
    Lion(std::string name, int age, double maneLength);
    std::string GetDetails() const override;
};

#endif
