#include <iostream>
#include "petHeader.h"


int main(int argc, char* argv[]) {

    Pet myPet("Cara", 10, "Dog");
    Pet copyOfMyPet = myPet;
    Pet* myOtherPet = new Pet("Lacky", 8, "Dog");
    Pet cat;

    cat.setName("Rhea");

    myPet.print();
    copyOfMyPet.print();
    myOtherPet->print();
    cat.print();

    cat.setType("Cat");
    cat.print();

    delete myOtherPet;

    myPet.setName("Kara");
    myPet.print();
    copyOfMyPet.print();

    Pet myPetMoved(std::move(myPet));
    myPet.print();
    myPetMoved.print();

    return 0;
}