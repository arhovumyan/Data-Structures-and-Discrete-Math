#ifndef MONKEY_H
#define MONKEY_H

#include "Animal.h"

class Monkey : public Animal {
private:
    double _tailLength;

public:
    Monkey(std::string name, int age, double tailLength);
    std::string GetDetails() const override;
};

#endif