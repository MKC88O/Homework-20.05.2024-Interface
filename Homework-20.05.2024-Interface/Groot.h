#pragma once
#include "SuperHero.h"
#include "Animal.h"
#include "Good.h"
#include "TreeManagment.h"
#include "Regeneration.h"
#include "FireResistance.h"
#include "SuperPower.h"

using namespace std;

class Groot : public SuperHero, public Animal, public Good {
public:
    Groot();
    Groot(string name);

    virtual~Groot();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
};

