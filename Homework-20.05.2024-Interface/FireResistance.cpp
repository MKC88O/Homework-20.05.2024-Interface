#include "FireResistance.h"

    FireResistance::FireResistance() : FireResistance("Fire_Resistance") {}

    FireResistance::FireResistance(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    FireResistance::~FireResistance() {}

    void FireResistance::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string FireResistance::GetNameAbility() const {
        return nameAbility;
    }
