#pragma once
#include <memory>
#include "pet.h"

class Owner;

class Dog : public Pet {
private:
    char* name;
    int age;
    int foodLevel;
    std::shared_ptr<Owner> ownerPtr;

public:
    Dog(const char* dogName, int dogAge);
    Dog(const Dog& dog);
    Dog(Dog&& dog);
    Dog();
    ~Dog();

    void print() const override;
    void setName(const char* newName) override;
    void isFedBy(const char* person);
    void setOwner(const std::shared_ptr<Owner>& owner);
};