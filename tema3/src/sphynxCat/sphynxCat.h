#pragma once
#include "cat.h"

namespace sphynx {
    class SphynxCat : public Cat {
    public:
    
    SphynxCat(const char* petName, int petAge);

    void takeBath() const override;
};
}

