#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class BulletProof : public Ability {
    string nameAbility;
public:
    BulletProof();
    BulletProof(string nameAbility);

    virtual~BulletProof();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};

