#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class Regeneration : public Ability {
    string nameAbility;
public:
    Regeneration();
    Regeneration(string nameAbility);

    virtual~Regeneration();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};
