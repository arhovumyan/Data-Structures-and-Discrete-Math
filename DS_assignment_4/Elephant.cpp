#include "Elephant.h"

Elephant::Elephant(std::string name, int age, double trunkLength)
    : Animal(name, "Elephant", age), _trunkLength(trunkLength) {}

std::string Elephant::GetDetails() const {
    return "Name: " + GetName() + "\nSpecies: " + GetSpecies() + "\nAge: " + std::to_string(GetAge()) +
           "\nTrunk Length: " + std::to_string(_trunkLength) + " meters\n";
}