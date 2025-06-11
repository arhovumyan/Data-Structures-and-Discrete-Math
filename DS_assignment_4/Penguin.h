#ifndef PENGUIN_H
#define PENGUIN_H

#include "Animal.h"

class Penguin : public Animal {
private:
    double _swimmingSpeed;

public:
    Penguin(std::string name, int age, double swimmingSpeed);
    std::string GetDetails() const override;
};

#endif