#include "Groot.h"

    Groot::Groot() : Groot("Groot") {}

    Groot::Groot(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new FireResistance());
        SuperHeroAbility(new Regeneration());
        SuperHeroAbility(new TreeManagement());
    }

    Groot::~Groot() {}

    void Groot::SetName(string name) {
        this->name = name;
    }

    string Groot::GetName() const {
        return name;
    }

    string Groot::GetRace() const {
        return Animal::GetRace();
    }

    string Groot::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
