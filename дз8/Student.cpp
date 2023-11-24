#include "Student.h"

void Student::SetName(std::string name) {
    this->name = name;
}

std::string Student::GetName() const {
    return name;
}

void Student::SetAge(int age) {
    this->age = age;
}

int Student::GetAge() const {
    return age;
}

void Student::SetMajor(std::string major) {
    this->major = major;
}

std::string Student::GetMajor() const {
    return major;
}

void Student::Study() {
    std::cout << name << " is studying.\n";
}