#include "CaptainAmerica.h"

    CaptainAmerica::CaptainAmerica() : CaptainAmerica("Captain America") {}

    CaptainAmerica::CaptainAmerica(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new BulletProof());
    }

    CaptainAmerica::~CaptainAmerica() {}

    void CaptainAmerica::SetName(string name) {
        this->name = name;
    }

    string CaptainAmerica::GetName() const {
        return name;
    }
    string CaptainAmerica::GetRace() const {
        return Human::GetRace();
    }
    string CaptainAmerica::GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
