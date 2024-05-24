#pragma once
#include <iostream>
#include <vector>
#include "SuperHero.h"
#include "Human.h"
#include "Good.h"
#include "SuperPower.h"
#include "Regeneration.h"

using namespace std;

class Wolverine : public SuperHero, public Human, public Good {
public:
    Wolverine();
    Wolverine(string name);

    virtual~Wolverine();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
};
