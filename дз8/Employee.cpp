#include "Employee.h"

void Employee::SetName(std::string name) {
    this->name = name;
}

std::string Employee::GetName() const {
    return name;
}

void Employee::SetAge(int age) {
    this->age = age;
}

int Employee::GetAge() const {
    return age;
}

void Employee::SetPosition(std::string position) {
    this->position = position;
}

std::string Employee::GetPosition() const {
    return position;
}

void Employee::Work() {
    std::cout << name << " is working as a " << position << ".\n";
}