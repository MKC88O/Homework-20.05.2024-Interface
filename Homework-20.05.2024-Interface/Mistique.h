#pragma once
#include <iostream>
#include <vector>
#include "SuperHero.h"
#include "Human.h"
#include "Bad.h"
#include "ShapeShifting.h"

using namespace std;

class Mystique : public SuperHero, public Human, public Bad {
public:
    Mystique();
    Mystique(string name);

    virtual~Mystique();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
};
