#include <iostream>
#include <thread>
#include "dog.h"
#include "cat.h"
#include "sphynxCat.h"

using namespace sphynx;

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

    return 0;
}