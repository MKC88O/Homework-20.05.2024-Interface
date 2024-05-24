#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

class SuperHero abstract {
protected:
    string name;
    vector<Ability*> abilities;
public:
    virtual~SuperHero() = default;

    virtual string GetName() const = 0;
    virtual string GetRace() const = 0;
    virtual string GetMoralQualities() const = 0;
    const vector<Ability*>& GetAbilities()const;

    virtual void SuperHeroAbility(Ability* ability);
    virtual void Print() const;
};

