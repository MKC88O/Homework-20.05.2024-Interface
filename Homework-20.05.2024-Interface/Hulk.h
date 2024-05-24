#pragma once
#include "SuperHero.h"
#include "Human.h"
#include "Good.h"
#include "SuperPower.h"

using namespace std;

class Hulk : public SuperHero, public Human, public Good {
public:
    Hulk();
    Hulk(string name);

    virtual~Hulk();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
};

