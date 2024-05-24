#pragma once
#include "SuperHero.h"
#include "God.h"
#include "Good.h"
#include "SuperPower.h"
#include "Flight.h"

using namespace std;

class Thor : public SuperHero, public God, public Good, public Flight {
public:
    Thor();
    Thor(string name);

    virtual~Thor();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;

    void Fly() const;
};

