#include <iostream>
#include "dog.h"
#include "cat.h"
#include "sphynxCat.h"

using namespace sphynx;

int main() {
    
    Dog dog("Cara", 10);
    Dog dog2(Dog("Lacky", 8));

    Dog copyDog = dog;
    copyDog.setName("Kara");

    dog.print();
    copyDog.print();
    dog2.print();

    Cat cat("Rhea", 5);

    cat.print();

    Cat assignCat;
    assignCat = cat;
    assignCat = Cat("Miti", 6);
    assignCat.takeBath();

    Cat* sphynx = new SphynxCat("Paco2", 6);
    sphynx->takeBath();
    return 0;
}