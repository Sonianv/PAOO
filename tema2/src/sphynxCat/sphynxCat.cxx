#include <iostream>
#include "SphynxCat.h"

using namespace sphynx;

SphynxCat::SphynxCat(const char* catName, int catAge) : Cat(catName, catAge) {}

void SphynxCat::takeBath() const {
    std::cout << "Bathing sphynx cat " << name << ". Prrrrrrrr!" << std::endl;
}