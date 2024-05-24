#include "Superman.h"

    Superman::Superman() : Superman("Superman") {}

    Superman::Superman(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new BulletProof());
        SuperHeroAbility(new XRayVision());
        SuperHeroAbility(new Freeze());
        SuperHeroAbility(new Flight());
    }

    Superman::~Superman() {}

    void Superman::SetName(string name) {
        this->name = name;
    }

    string Superman::GetName() const {
        return name;
    }
    string Superman::GetRace() const {
        return Human::GetRace();
    }
    string Superman::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
    void Superman::Fly() const {
        cout << "Superman flight\n";
    }
