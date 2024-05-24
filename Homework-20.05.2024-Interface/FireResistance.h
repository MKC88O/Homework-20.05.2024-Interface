#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class FireResistance : public Ability {
    string nameAbility;
public:
    FireResistance();
    FireResistance(string nameAbility);

    virtual~FireResistance();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

