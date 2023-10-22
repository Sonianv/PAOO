#pragma once

#include <string>

class Pet {
private:
    std::string name;
    int age;
    std::string type;

public:
    Pet(const std::string& petName, int petAge, const std::string& petType);

    Pet(const Pet& pet);

    ~Pet();

    void print() const;
};