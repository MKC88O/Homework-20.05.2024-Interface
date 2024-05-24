#include "Freeze.h"

    Freeze::Freeze() : Freeze("Freeze") {}

    Freeze::Freeze(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    Freeze::~Freeze() {}

    void Freeze::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string Freeze::GetNameAbility() const {
        return nameAbility;
    }
