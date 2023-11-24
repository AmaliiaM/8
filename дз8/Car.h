#include <iostream>
#include <string>

    class Car {
        std::string brand;
        std::string model;
        int year;

    public:
        void SetBrand(std::string brand);
        std::string GetBrand() const;
        void SetModel(std::string model);
        std::string GetModel() const;
        void SetYear(int year);
        int GetYear() const;
        void Start();
        void Stop();
    };


