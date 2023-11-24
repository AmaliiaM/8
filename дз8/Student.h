#include <iostream>
#include <string>

class Student {
    std::string name;
    int age;
    std::string major;

public:
    void SetName(std::string name);
    std::string GetName() const;
    void SetAge(int age);
    int GetAge() const;
    void SetMajor(std::string major);
    std::string GetMajor() const;
    void Study();
};
