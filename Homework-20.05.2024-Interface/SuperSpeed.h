#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class SuperSpeed : public Ability {
    string nameAbility;
public:
    SuperSpeed();
    SuperSpeed(string nameAbility);

    virtual~SuperSpeed();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

