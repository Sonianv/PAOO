#include "petHeader.h"
#include <iostream>

Pet::Pet(const std::string& petName, int petAge, const std::string& petType)
    : name(petName), age(petAge), type(petType) {
}

Pet::Pet(const Pet& pet)
    : name(pet.name), age(pet.age), type(pet.type) {
}

Pet::~Pet() {
}

void Pet::print() const {
    std::cout << "Name: " << name << ", Age: " << age << ", Type: " << type << std::endl;
}