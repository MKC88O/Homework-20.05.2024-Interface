#include "SuperPower.h"

    SuperPower::SuperPower() : SuperPower("Super_Power") {}

    SuperPower::SuperPower(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    SuperPower::~SuperPower() {}

    void SuperPower::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string SuperPower::GetNameAbility() const {
        return nameAbility;
    }

