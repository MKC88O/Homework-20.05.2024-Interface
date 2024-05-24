#include "Good.h"

    Good::Good() : Good("Good") {}

    Good::Good(string moralQualities) {
        SetMoralQualities(moralQualities);
    }

    Good::~Good() {}

    void Good::SetMoralQualities(string moralQualities) {
        this->moralQualities = moralQualities;
    }

    string Good::GetMoralQualities() const {
        return moralQualities;
    }

