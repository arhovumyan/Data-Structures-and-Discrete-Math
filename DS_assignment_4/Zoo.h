#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "Animal.h"

class Zoo {
private:
    std::vector<Animal*> _animals;

public:
    void AddAnimal(Animal* animal);
    void DisplayAllAnimals() const;
    ~Zoo();
};

#endif