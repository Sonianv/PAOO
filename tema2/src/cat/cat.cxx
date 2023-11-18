#include <iostream>
#include <cstring>
#include "cat.h"

Cat::Cat(const char* catName, int catAge) : age(catAge) {
    name = new char[strlen(catName) + 1];
    strcpy(name, catName);
    std::cout << name << " in Cat constructor" << std::endl;
}

Cat::Cat(const Cat& cat) : age(cat.age) {
    name = new char[strlen(cat.name) + 1];
    strcpy(name, cat.name);
    std::cout << name << " in Cat copy constructor" << std::endl;
}

Cat::Cat(Cat&& cat) {
    name = cat.name;
    age = cat.age;

    cat.name = nullptr;
    cat.age = 0;
    std::cout << name << " in Cat move constructor" << std::endl;
}

Cat::Cat() : name(nullptr), age(0) {
    std::cout << "Default Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat memory deallocated!" << std::endl;
    delete[] name;
}

void Cat::print() const {
    if (name) {
        std::cout << "Cat: " << name << "has an age of: " << age << std::endl;
    } else {
        std::cout << "Not all fields are initialized." << std::endl;
    }
}

void Cat::setName(const char* newName) {
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}