#include "SuperSpeed.h"

    SuperSpeed::SuperSpeed() : SuperSpeed("Super_Speed") {}

    SuperSpeed::SuperSpeed(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    SuperSpeed::~SuperSpeed() {}

    void SuperSpeed::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string SuperSpeed::GetNameAbility() const {
        return nameAbility;
    }
