#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class ShapeShifting : public Ability {
    string nameAbility;
public:
    ShapeShifting();
    ShapeShifting(string nameAbility);

    virtual~ShapeShifting();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

