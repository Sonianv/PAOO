#pragma once
#include <memory>

class Dog;

class Owner {
private:
    char* name;
    std::weak_ptr<Dog> dogPtr;

public:
    Owner(const char* ownerName);
    ~Owner();

    void setDog(const std::shared_ptr<Dog>& dog);
};
