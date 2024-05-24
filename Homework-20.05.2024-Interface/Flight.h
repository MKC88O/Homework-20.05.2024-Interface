#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class Flight : public Ability {
    string nameAbility;
public:
    Flight();
    Flight(string nameAbility);

    virtual~Flight();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;

    virtual void Fly() const;
};

