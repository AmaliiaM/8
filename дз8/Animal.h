#include <iostream>
#include <string>

class Animal {
    std::string name;
    std::string species;
    int age;

public:
    void SetName(std::string name);
    std::string GetName() const;
    void SetSpecies(std::string species);
    std::string GetSpecies() const;
    void SetAge(int age);
    int GetAge() const;
    void Eat();
};
