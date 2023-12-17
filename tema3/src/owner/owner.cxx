#include <iostream>
#include <cstring>
#include "owner.h"
#include "dog.h"


Owner::Owner(const char* ownerName) {
    name = new char[strlen(ownerName) + 1];
    strcpy(name, ownerName);
    std::cout << name << " in Owner constructor" << std::endl;
}

Owner::~Owner() {
    std::cout << "Owner memory deallocated!" << std::endl;
    delete[] name;
}

void Owner::setDog(const std::shared_ptr<Dog>& dog) {
    dogPtr = dog;
}