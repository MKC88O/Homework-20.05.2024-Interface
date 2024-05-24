#pragma once
#include <iostream>
#include <vector>
using namespace std;

class  God abstract {
    string race;
public:
    God();
    God(string race);

    virtual~God();

    void SetRace(string race);

    virtual string GetRace() const;
};
