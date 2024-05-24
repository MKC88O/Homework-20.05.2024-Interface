#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class Freeze : public Ability {
    string nameAbility;
public:
    Freeze();
    Freeze(string nameAbility);

    virtual~Freeze();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};


