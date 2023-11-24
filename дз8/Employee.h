#include <iostream>
#include <string>

class Employee {
    std::string name;
    int age;
    std::string position;

public:
    void SetName(std::string name);
    std::string GetName() const;
    void SetAge(int age);
    int GetAge() const;
    void SetPosition(std::string position);
    std::string GetPosition() const;
    void Work();
};
