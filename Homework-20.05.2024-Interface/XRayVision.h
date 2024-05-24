#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class XRayVision : public Ability {
    string nameAbility;
public:
    XRayVision();
    XRayVision(string nameAbility);

    virtual~XRayVision();

    void SetNameAbility(string nameAbility);

    string GetNameAbility() const;
};
