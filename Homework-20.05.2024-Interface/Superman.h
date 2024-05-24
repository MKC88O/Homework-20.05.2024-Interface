#pragma once
#include "SuperHero.h"
#include "Human.h"
#include "Good.h"
#include "SuperPower.h"
#include "BulletProof.h"
#include "XRayVision.h"
#include "Freeze.h"
#include "Flight.h"

using namespace std;

class Superman : public SuperHero, public Human, public Good, public Flight {
public:
    Superman();
    Superman(string name);

    virtual~Superman();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
    
    void Fly() const;
};

