#include "Penguin.h"

Penguin::Penguin(std::string name, int age, double swimmingSpeed)
    : Animal(name, "Penguin", age), _swimmingSpeed(swimmingSpeed) {}

std::string Penguin::GetDetails() const {
    return "Name: " + GetName() + "\nSpecies: " + GetSpecies() + "\nAge: " + std::to_string(GetAge()) +
           "\nSwimming Speed: " + std::to_string(_swimmingSpeed) + " km/h\n";
}
