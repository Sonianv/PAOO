#pragma once

class Pet {
private:
    char* name;
    int age;
    char* type;

public:
    Pet(const char* petName, int petAge, const char* petType);
    
    Pet(const Pet& pet);

    Pet(Pet&& pet);

    Pet();

    ~Pet();

    void print() const;

    void setName(const char* newName);

    void setType(const char* newType);

};