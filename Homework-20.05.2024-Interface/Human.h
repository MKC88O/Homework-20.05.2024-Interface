#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Human abstract {
    string race;
public:
    Human();
    Human(string race);

    virtual~Human();

    void SetRace(string race);

    virtual string GetRace() const;
};
