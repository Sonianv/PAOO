#include <iostream>
#include "dog.h"
#include "cat.h"

int main() {
    
    Dog dog("Cara", 10);
    Dog dog2(Dog("Lacky", 8));

    Dog copyDog = dog;
    copyDog.setName("Kara");

    dog.print();
    dog2.print();

    Cat cat("Rhea", 5);
    Cat assignCat;
    assignCat = cat;
    assignCat = Cat("Miti", 6);

    return 0;
}