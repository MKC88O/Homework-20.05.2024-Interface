#pragma once
#include "SuperHero.h"
#include "Human.h"
#include "Good.h"
#include "SuperPower.h"
#include "BulletProof.h"

using namespace std;

class CaptainAmerica : public SuperHero, public Human, public Good {
public:
    CaptainAmerica();
    CaptainAmerica(string name);

    virtual~CaptainAmerica();

    void SetName(string name);

    string GetName() const;
    string GetRace() const;
    string GetMoralQualities() const;
};

