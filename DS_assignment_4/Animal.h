#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string _name;
    std::string _species;
    int _age;

public:
    Animal(std::string name, std::string species, int age);
    std::string GetName() const;
    std::string GetSpecies() const;
    int GetAge() const;
    virtual std::string GetDetails() const = 0;
    virtual ~Animal() {}
};

#endif
