#include <iostream>

using namespace std;

class Zoo {
private:
  string name;
  string species;
  int age;
public:
  Zoo(string name, string specie, int age);
  int GetName();
  int GetSpecies();
  int GetAge();
  virtual string GetDetails();
};