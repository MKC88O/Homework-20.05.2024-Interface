#include "Hulk.h"

    Hulk::Hulk() : Hulk("Hulk") {}

    Hulk::Hulk(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
    }

    Hulk::~Hulk() {}

    void Hulk::SetName(string name) {
        this->name = name;
    }

    string Hulk::GetName() const {
        return name;
    }
    string Hulk::GetRace() const {
        return Human::GetRace();
    }
    string Hulk::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }

