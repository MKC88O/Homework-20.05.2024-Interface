#include "Bad.h"

    Bad::Bad() : Bad("Bad") {}

    Bad::Bad(string moralQualities) {
        SetMoralQualities(moralQualities);
    }

    Bad::~Bad() {}

    void Bad::SetMoralQualities(string moralQualities) {
        this->moralQualities = moralQualities;
    }

    string Bad::GetMoralQualities() const {
        return moralQualities;
    }
