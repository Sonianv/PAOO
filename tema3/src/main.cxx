#include <iostream>
#include <thread>
#include "dog.h"
#include "owner.h"

int main() {
    
    Dog cara("Cara", 10);

    std::thread feedingThread1([&cara]() {
        cara.isFedBy("Sonia");
    });

    std::thread feedingThread2([&cara]() {
        cara.isFedBy("Ioana");
    });

    std::thread feedingThread3([&cara]() {
        cara.isFedBy("Marius");
    });

    std::thread gettingHungryThread1([&cara]() {
        cara.isGettingHungry();
    });

    std::thread gettingHungryThread2([&cara]() {
        cara.isGettingHungry();
    });

    feedingThread1.join();
    feedingThread2.join();
    feedingThread3.join();
    gettingHungryThread1.join();
    gettingHungryThread2.join();

    cara.print();


    //smart pointers
    std::shared_ptr<Dog> dog = std::make_shared<Dog>("Lacky", 8);
    std::shared_ptr<Owner> owner = std::make_shared<Owner>("Sonia");

    std::weak_ptr<Dog> weakDog = dog;

    if (auto sharedDog = weakDog.lock()) {
        sharedDog->setOwner(owner);
    }

    owner->setDog(dog);

    return 0;
}