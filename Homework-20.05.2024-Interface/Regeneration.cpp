#include "Regeneration.h"

    Regeneration::Regeneration() : Regeneration("Regeneration") {}

    Regeneration::Regeneration(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    Regeneration::~Regeneration() {}

    void Regeneration::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string Regeneration::GetNameAbility() const {
        return nameAbility;
    }
