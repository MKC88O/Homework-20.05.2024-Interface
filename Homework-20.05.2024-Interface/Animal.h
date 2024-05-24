#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Animal abstract {
    string race;
public:
    Animal();
    Animal(string race);

    virtual~Animal();

    void SetRace(string race);

    virtual string GetRace() const;
};


