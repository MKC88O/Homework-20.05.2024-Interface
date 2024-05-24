#include "Wolverine.h"

    Wolverine::Wolverine() : Wolverine("Wolverine") {}

    Wolverine::Wolverine(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new Regeneration());
    }

    Wolverine::~Wolverine() {}

    void Wolverine::SetName(string name) {
        this->name = name;
    }

    string Wolverine::GetName() const {
        return name;
    }
    string Wolverine::GetRace() const {
        return Human::GetRace();
    }
    string Wolverine::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
