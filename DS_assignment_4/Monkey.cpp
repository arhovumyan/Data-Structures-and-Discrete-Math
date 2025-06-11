#include "Monkey.h"

Monkey::Monkey(std::string name, int age, double tailLength)
    : Animal(name, "Monkey", age), _tailLength(tailLength) {}

std::string Monkey::GetDetails() const {
    return "Name: " + GetName() + "\nSpecies: " + GetSpecies() + "\nAge: " + std::to_string(GetAge()) +
           "\nTail Length: " + std::to_string(_tailLength) + " cm\n";
}
