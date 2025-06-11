#include "Lion.h"

Lion::Lion(std::string name, int age, double maneLength)
    : Animal(name, "Lion", age), _maneLength(maneLength) {}

std::string Lion::GetDetails() const {
    return "Name: " + GetName() + "\nSpecies: " + GetSpecies() + "\nAge: " + std::to_string(GetAge()) +
           "\nMane Length: " + std::to_string(_maneLength) + " cm\n";
}
