#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class TreeManagement : public Ability {
    string nameAbility;
public:
    TreeManagement();
    TreeManagement(string nameAbility);

    virtual~TreeManagement();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

