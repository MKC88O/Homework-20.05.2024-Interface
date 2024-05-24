#include "IronMan.h"

    IronMan::IronMan() : IronMan("Iron Man") {}

    IronMan::IronMan(string name) {
        SetName(name);
        SuperHeroAbility(new Flight());
        SuperHeroAbility(new SuperPower());
    }

    IronMan::~IronMan() {}

    void IronMan::SetName(string name) {
        this->name = name;
    }

    string IronMan::GetName() const {
        return name;
    }
    string IronMan::GetRace() const {
        return Human::GetRace();
    }
    string IronMan::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
    void IronMan::Fly() const {
        cout << "Iron Man flight\n";
    }