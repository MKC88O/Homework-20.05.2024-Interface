#pragma once
#include <iostream>
#include <vector>
#include "SuperHero.h"
#include "Human.h"
#include "Good.h"
#include "Flight.h"
#include "SuperPower.h"

using namespace std;

class IronMan : public SuperHero, public Human, public Good, public Flight {
public:
    IronMan();
    IronMan(string name);

    virtual~IronMan();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;

    void Fly() const;
};
