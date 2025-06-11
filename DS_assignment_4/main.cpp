#include "Zoo.h"
#include "Lion.h"
#include "Elephant.h"
#include "Penguin.h"
#include "Monkey.h"

int main() {
    Zoo zoo;
    zoo.AddAnimal(new Lion("Simba", 5, 25.0));
    zoo.AddAnimal(new Elephant("Dumbo", 10, 2.5));
    zoo.AddAnimal(new Penguin("Pingu", 3, 10.0));
    zoo.AddAnimal(new Monkey("George", 4, 75.0));
    zoo.DisplayAllAnimals();
    return 0;
}