#include "Animal.h"

void Animal::SetName(std::string name) {
    this->name = name;
}

std::string Animal::GetName() const {
    return name;
}

void Animal::SetSpecies(std::string species) {
    this->species = species;
}

std::string Animal::GetSpecies() const {
    return species;
}

void Animal::SetAge(int age) {
    this->age = age;
}

int Animal::GetAge() const {
    return age;
}

void Animal::Eat() {
    std::cout << name << " the " << species << " is eating.\n";
}