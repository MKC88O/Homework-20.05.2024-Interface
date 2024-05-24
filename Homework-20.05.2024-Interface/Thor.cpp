#include "Thor.h"

    Thor::Thor() : Thor("Thor") {}

    Thor::Thor(string name) {
        SetName(name);
        SuperHeroAbility(new Flight());
        SuperHeroAbility(new SuperPower());
    }

    Thor::~Thor() {}

    void Thor::SetName(string name) {
        this->name = name;
    }

    string Thor::GetName() const {
        return name;
    }
    string Thor::GetRace() const {
        return God::GetRace();
    }
    string Thor::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }

    void Thor::Fly() const {
        cout << "Thor flight\n";
    }
