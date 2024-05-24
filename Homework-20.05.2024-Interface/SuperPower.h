#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class SuperPower : public Ability {
    string nameAbility;
public:
    SuperPower();
    SuperPower(string nameAbility);

    virtual~SuperPower();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

