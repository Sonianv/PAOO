#pragma once

class Pet {
public:
    virtual ~Pet() {}

    virtual void print() const = 0;
    virtual void setName(const char* newName) = 0;
};