#include <iostream>
#include <cstring>
#include <mutex>
#include <thread>
#include "dog.h"
#include "owner.h"

std::mutex foodMutex;


Dog::Dog(const char* petName, int petAge) : age(petAge), foodLevel(0) {
    name = new char[strlen(petName) + 1];
    strcpy(name, petName);
    std::cout << name << " in Dog constructor" << std::endl;
}

Dog::Dog(const Dog& dog) : age(dog.age), foodLevel(dog.foodLevel) {
    name = new char[strlen(dog.name) + 1];
    strcpy(name, dog.name);
    std::cout << name << " in Dog copy constructor" << std::endl;
}

Dog::Dog(Dog&& dog) {
    name = dog.name;
    age = dog.age;
    foodLevel = dog.foodLevel;

    dog.name = nullptr;
    dog.age = 0;
    dog.foodLevel = 0;
    std::cout << name << " in Dog move constructor" << std::endl;
}

Dog::Dog() : name(nullptr), age(0), foodLevel(0) {
    std::cout << "Default Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << name << " memory deallocated!" << std::endl;
    delete []name;
}

void Dog::print() const {
    if (name) {
        std::cout << "Dog: " << name << " has an age of: " << age << ". Food level:" << foodLevel << std::endl;
    } else {
        std::cout << "Not all fields are initialized." << std::endl;
    }
}

void Dog::setName(const char* newName) {
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}

void Dog::isFedBy(const char* person) {

    while (foodLevel < 10) {
        std::cout << person << " is feeding " << name << std::endl;
        std::lock_guard<std::mutex> lock(foodMutex);
        if(foodLevel == 10) break;
        foodLevel++;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    std::cout << "Current food level: " << foodLevel << std::endl;
}

void Dog::setOwner(const std::shared_ptr<Owner>& owner) {
    ownerPtr = owner;
}
