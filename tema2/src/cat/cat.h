#pragma once
#include "pet.h"

class Cat : public Pet {
private:
    char* name;
    int age;

public:
    Cat(const char* petName, int petAge);
    Cat(const Cat& cat);
    Cat(Cat&& cat);
    Cat();
    ~Cat();

    void print() const override;
    void setName(const char* newName) override;
};