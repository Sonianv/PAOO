#include <iostream>
#include <cstring>
#include "dog.h"

Dog::Dog(const char* petName, int petAge) : age(petAge) {
    name = new char[strlen(petName) + 1];
    strcpy(name, petName);
    std::cout << name << " in Dog constructor" << std::endl;
}

Dog::Dog(const Dog& dog) : age(dog.age) {
    name = new char[strlen(dog.name) + 1];
    strcpy(name, dog.name);
    std::cout << name << " in Dog copy constructor" << std::endl;
}

Dog::Dog(Dog&& dog) {
    name = dog.name;
    age = dog.age;

    dog.name = nullptr;
    dog.age = 0;
    std::cout << name << " in Dog move constructor" << std::endl;
}

Dog::Dog() : name(nullptr), age(0) {
    std::cout << "Default Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog memory deallocated!" << std::endl;
    delete []name;
}

void Dog::print() const {
    if (name) {
        std::cout << "Dog: " << name << " has an age of: " << age << std::endl;
    } else {
        std::cout << "Not all fields are initialized." << std::endl;
    }
}

void Dog::setName(const char* newName) {
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}