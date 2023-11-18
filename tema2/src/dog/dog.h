#pragma once
#include "pet.h"

class Dog : public Pet {
private:
    char* name;
    int age;

public:
    Dog(const char* dogName, int dogAge);
    Dog(const Dog& dog);
    Dog(Dog&& dog);
    Dog();
    ~Dog();

    void print() const override;
    void setName(const char* newName) override;
};