#include "Mistique.h"

    Mystique::Mystique() : Mystique("Mystique") {}

    Mystique::Mystique(string name) {
        SetName(name);
        SuperHeroAbility(new ShapeShifting());
    }

    Mystique::~Mystique() {}

    void Mystique::SetName(string name) {
        this->name = name;
    }

    string Mystique::GetName() const {
        return name;
    }
    string Mystique::GetRace() const {
        return Human::GetRace();
    }
    string Mystique::GetMoralQualities() const {
        return Bad::GetMoralQualities();
    }
