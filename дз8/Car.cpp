#include "Car.h"

void Car::SetBrand(std::string brand) {
    this->brand = brand;
}

std::string Car::GetBrand() const {
    return brand;
}

void Car::SetModel(std::string model) {
    this->model = model;
}

std::string Car::GetModel() const {
    return model;
}

void Car::SetYear(int year) {
    this->year = year;
}

int Car::GetYear() const {
    return year;
}

void Car::Start() {
    std::cout << brand << " " << model << " is starting.\n";
}

void Car::Stop() {
    std::cout << brand << " " << model << " is stopping.\n";
}
