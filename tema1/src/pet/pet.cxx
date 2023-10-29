#include <iostream>
#include <cstring>
#include "petHeader.h"

Pet::Pet(const char* petName, int petAge, const char* petType)
    : age(petAge) {
        name = new char[strlen(petName) + 1];
        strcpy(name, petName);
        type = new char[strlen(petType) + 1];
        strcpy(type, petType);
        std::cout << name << " in constructor" << std::endl;
}

Pet::Pet(const Pet& pet)
    : age(pet.age) {
        name = new char[strlen(pet.name) + 1];
        strcpy(name, pet.name);
        type = new char[strlen(pet.type) + 1];
        strcpy(type, pet.type);
        std::cout << name << " in copy constructor" << std::endl;
}

Pet::Pet(Pet&& pet) {
    name = pet.name;
    age = pet.age;
    type = pet.type;

    pet.name = nullptr;
    pet.age = 0;
    pet.type = nullptr;
    std::cout << name << " in move constructor" << std::endl;
}

Pet::Pet() : name(nullptr), age(0), type(nullptr) {
    std::cout << "Default constructor" << std::endl;
}

Pet::~Pet() {
    std::cout << "Memory dealocated!" << std::endl;
    delete []name;
    delete []type;
}

void Pet::print() const {
    if(name && type) {
        std::cout << "Name: " << name << ", Age: " << age << ", Type: " << type << std::endl;
    } else {
        std::cout << "Not all fields are initialized." << std::endl;
    }
}

void Pet::setName(const char* newName) {
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}

void Pet::setType(const char* newType) {
    delete[] type;
    type = new char[strlen(newType) + 1];
    strcpy(type, newType);
}