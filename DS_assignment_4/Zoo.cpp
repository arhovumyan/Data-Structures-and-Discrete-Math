#include "Zoo.h"
#include <iostream>

void Zoo::AddAnimal(Animal* animal) {
    _animals.push_back(animal);
}

void Zoo::DisplayAllAnimals() const {
    for (const auto& animal : _animals) {
        std::cout << animal->GetDetails() << std::endl;
    }
}

Zoo::~Zoo() {
    for (auto animal : _animals) {
        delete animal;
    }
    _animals.clear();
}
